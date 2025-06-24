#include <stdio.h>
#include <string.h>

#define MAX_PARAMS 10

typedef struct {
    char param[16];
    char value[16];
} Param;

Param params[MAX_PARAMS];
int param_count = 0;

void cli_shell() {
    char input[64];
    char cmd[8], p[16], v[16];

    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL)
            break;

        input[strcspn(input, "\n")] = '\0'; // remove newline

        if (sscanf(input, "SET %15s %15s", p, v) == 2) {
            int found = 0;
            for (int i = 0; i < param_count; i++) {
                if (strcmp(params[i].param, p) == 0) {
                    strncpy(params[i].value, v, sizeof(params[i].value) - 1);
                    params[i].value[15] = '\0';
                    found = 1;
                    break;
                }
            }
            if (!found && param_count < MAX_PARAMS) {
                strncpy(params[param_count].param, p, sizeof(params[param_count].param) - 1);
                strncpy(params[param_count].value, v, sizeof(params[param_count].value) - 1);
                params[param_count].param[15] = '\0';
                params[param_count].value[15] = '\0';
                param_count++;
            }
        } else if (sscanf(input, "GET %15s", p) == 1) {
            int found = 0;
            for (int i = 0; i < param_count; i++) {
                if (strcmp(params[i].param, p) == 0) {
                    printf("%s\n", params[i].value);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Not found\n");
            }
        } else if (strcmp(input, "LIST") == 0) {
            for (int i = 0; i < param_count; i++) {
                printf("%s %s\n", params[i].param, params[i].value);
            }
        } else {
            printf("Invalid command\n");
        }
    }
}

int main() {
    cli_shell();
    return 0;
}
