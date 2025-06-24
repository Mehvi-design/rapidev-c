#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int parse_int(const char *str) {
    while (*str) {
        if (isdigit(*str) || (*str == '-' && isdigit(*(str + 1)))) {
            return atoi(str); // Convert string to integer
        }
        str++;
    }
    return 0; // Default if no number found
}


float parse_float(const char *str) {
    while (*str) {
        if (isdigit(*str) || (*str == '-' && isdigit(*(str + 1)))) {
            return atof(str); // Convert string to float
        }
        str++;
    }
    return 0.0f; // Default if no number found
}
int main(){

    printf("the number integer is %d\n",parse_int("TEMP=25"));
    printf("The number float is: %.1f",parse_float("VOLT=3.3"));
}