#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_PARAMS 10

typedef struct {
    char param[16];
    char value[16];
} Param;

Param param_store[MAX_PARAMS];
int param_count = 0;

// Convert string to uppercase (for command keyword only)
void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

// Trims newline from fgets input
void trim_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

// Find param index in store (-1 if not found)
int find_param(const char *param) {
    for (int i = 0; i < param_count; i++) {
        if (strcmp(param_store[i].param, param) == 0) {
            return i;
        }
    }
    return -1;
}

// Add or update param
void set_param(const char *param, const char *value) {
    int idx = find_param(param);
    if (idx >= 0) {
        snprintf(param_store[idx].value, sizeof(param_store[idx].value), "%s", value);
    } else if (param_count < MAX_PARAMS) {
        snprintf(param_store[param_count].param, sizeof(param_store[param_count].param), "%s", param);
        snprintf(param_store[param_count].value, sizeof(param_store[param_count].value), "%s", value);
        param_count++;
    } else {
        printf("Parameter store full!\n");
    }
}

// Print value of a param
void get_param(const char *param) {
    int idx = find_param(param);
    if (idx >= 0) {
        printf("%s = %s\n", param_store[idx].param, param_store[idx].value);
    } else {
        printf("Param '%s' not found.\n", param);
    }
}

// List all stored params
void list_params() {
    if (param_count == 0) {
        printf("No parameters stored.\n");
        return;
    }
    for (int i = 0; i < param_count; i++) {
        printf("%s = %s\n", param_store[i].param, param_store[i].value);
    }
}

// Mini CLI shell loop
void cli_shell() {
    char input[64];
    char cmd[8], arg1[16], arg2[16];

    printf("Mini CLI Shell. Type commands like SET, GET, LIST. Ctrl+C to quit.\n");
    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        trim_newline(input);
        int arg_count = sscanf(input, "%7s %15s %15s", cmd, arg1, arg2);
        to_uppercase(cmd);

        if (strcmp(cmd, "SET") == 0 && arg_count == 3) {
            set_param(arg1, arg2);
        } else if (strcmp(cmd, "GET") == 0 && arg_count >= 2) {
            get_param(arg1);
        } else if (strcmp(cmd, "LIST") == 0) {
            list_params();
        } else {
            printf("Unknown or invalid command.\n");
        }
    }
}

int main() {
    cli_shell();
    return 0;
}
