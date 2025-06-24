#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool parse_kv_pair(char *input, char *key, char *value){
    char *pos;
    pos=strtok(input,"=");
    strcpy(key,pos);
    pos=strtok(NULL,"=");
    strcpy(value,pos);
    printf("%s\n",key);
    printf("%s\n",value);
    if(key!=NULL && value!=NULL){
        return true;
    }else    
        {return false;}

}
int main(){
    char input[]="rollno1";
    char key[10],value[10];
    printf("The parsing is %s",(parse_kv_pair(input,key,value))?"Commplete":"Impossible");

}