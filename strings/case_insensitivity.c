#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char *match_command(const char *input) {
    // List of known commands
    const char *commands[] = {"START", "STOP", "PAUSE", "RESUME"};
    int num_commands = sizeof(commands) / sizeof(commands[0]);

    for (int i = 0; i < num_commands; i++) {
        int j = 0;
        while (input[j] && commands[i][j]) {
            if (tolower((unsigned char)input[j]) != tolower((unsigned char)commands[i][j])) {
                break;
            }
            j++;
        }
        // If both strings ended at the same time, it's a match
        if (input[j] == '\0' && commands[i][j] == '\0') {
            return commands[i];
        }
    }
    return NULL;
}

int main() {
    char input[] = "start";
    const char *result = match_command(input);

    if (result) {
        printf("Matched command: %s\n", result);
    } else {
        printf("No matching command found.\n");
    }

    return 0;
}
