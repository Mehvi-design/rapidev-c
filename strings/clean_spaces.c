#include<stdio.h>
// 1) Initialize 'count' = 0 (Count of non-space character seen so far)
// 2) Iterate through all characters of given string, do following
//      a) If current character is non-space, then put this character
//         at index 'count' and increment 'count'
// 3) Finally, put '\0' at index 'count'
void clean_spaces(char *str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[count]=str[i];
            count++;
        }
    }
    str[count]='\0';
}
int main(){
    char str[]=" I like Rapidev ";
    clean_spaces(str);
    printf("%s",str);
}