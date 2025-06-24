#include<stdio.h>
#include<ctype.h>//library for toupper()
void str_to_upper(char *str){
   for(int i=0;str[i]!='\0';i++){
    str[i]=_toupper(str[i]);
   }
}
int main(){
    char str[]="hello";
    str_to_upper(str);
    printf("The letter in uppercase is: %s",str);
}