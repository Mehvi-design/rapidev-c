#include<stdio.h>
#include<ctype.h>
// return 0 if equal

int strcmp_case_insensitive(const char *a, const char *b){
    int i=0;
    while(a[i]!='\0'||b[i]!='\0'){
        if(tolower(a[i])!=tolower(b[i])){
           return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    char a[]="HELLO";
    char b[]="hello";
    printf("The strings are %s",(strcmp_case_insensitive(a,b))?"not equal":"equal");
}