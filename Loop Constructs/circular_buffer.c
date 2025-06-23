#include <stdio.h>

void print_circular_buffer(int *buffer, int size, int start, int count) {
    for (int i = 0; i < count; i++) {
        int pos = (i + start) % size;
        printf("%d", buffer[pos]);
        if (i < count - 1) printf(",");
    }
    printf("\n");
}

int main() {
    int buffer[100];
    int len;

    printf("Input the size of buffer (1-100): ");
    scanf("%d", &len);

    if (len > 100 || len < 1) {
        printf("Invalid buffer size. Max allowed is 100.\n");
        return 1;
    }

    printf("Enter %d integers:\n", len);
    for (int i = 0; i < len; i++) {
        scanf("%d", &buffer[i]);
    }

    printf("Buffer content: ");
    for (int i = 0; i < len; i++) {
        printf("%d", buffer[i]);
        if (i < len - 1) printf(",");
    }
    printf("\n");

    int start_level, print_until;
    do {
        printf("Type the starting position (0-%d) and how many values to print: ", len - 1);
        scanf("%d %d", &start_level, &print_until);
    } while (start_level >= len || print_until < 1);

    print_circular_buffer(buffer, len, start_level, print_until);

    return 0;
}
