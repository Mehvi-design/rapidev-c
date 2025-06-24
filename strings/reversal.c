#include<stdio.h>
#include<string.h>
#include <stdio.h>

void reverse_string(char *str) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Swaping characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}


int main(){
    char str[]="Hello, World!";
    reverse_string(str);
    printf("The reverse string is %s",str);

}