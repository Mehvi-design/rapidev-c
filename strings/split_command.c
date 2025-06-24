#include<stdio.h>
#include<string.h>
void split_command(char *cmd){
    char *token;
    const char s[1]=" ";
    token=strtok(cmd,s);
    while(token!=NULL){
        printf("%s\n",token);
        token=strtok(NULL,s);
    }
} // Input: "SET TEMP 25"
int main(){
    char cmd[]="SET TEMP 25";
    split_command(cmd);
    return 0;
}