#include <stdio.h>
#include <string.h>
void check_password(){
    int result, i=3;
    do{
    printf("Type the password:");
    char string1[20];
    char string2[] = "1234";
    scanf("%[^\n]%c",string1);//spaces would be considered
    result = strcmp(string1, string2); //compares the strings
    if(result==0){
        printf("Welcome");
        return;
    }
    else{
        i--;
        if(i>0){
         printf("Tries left %d\n",i);
        }
    } 
    }while(i!=0);

    printf("Lost tries,Access Denied");
} 
int main() {
    
    check_password();
    return 0;
}