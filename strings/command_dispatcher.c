#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef enum { CMD_SET, CMD_READ, CMD_INVALID } CommandType;

// Converts a word to uppercase (helper function)
void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

// Parses the command type from the input string
CommandType parse_command(const char *input) {
    char command[10];
    sscanf(input, "%s", command);
    to_uppercase(command);

    if (strcmp(command, "SET") == 0) {
        return CMD_SET;
    } else if (strcmp(command, "READ") == 0) {
        return CMD_READ;
    } else {
        return CMD_INVALID;
    }
}

// Handlers for each command type
void handle_set(const char *sensor, float value) {
    printf("Setting %s to %.1f\n", sensor, value);
}

void handle_read(const char *sensor) {
    printf("Reading value from %s\n", sensor);
}

// Executes the command by parsing it and calling the appropriate handler
void execute_command(const char *input) {
    CommandType cmd = parse_command(input);

    if (cmd == CMD_SET) {
        char sensor[20];
        float value;
        if (sscanf(input, "%*s %s %f", sensor, &value) == 2) {
            handle_set(sensor, value);
        } else {
            printf("Invalid SET format. Use: SET SENSOR VALUE\n");
        }
    } else if (cmd == CMD_READ) {
        char sensor[20];
        if (sscanf(input, "%*s %s", sensor) == 1) {
            handle_read(sensor);
        } else {
            printf("Invalid READ format. Use: READ SENSOR\n");
        }
    } else {
        printf("Unknown command.\n");
    }
}

// Test in main
int main() {
    execute_command("SET TEMP 25");
    execute_command("READ TEMP");
    execute_command("INVALID CMD");
    return 0;
}
