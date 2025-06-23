#include<stdio.h>
#include<ctype.h>
#include<string.h>
void Run_Length_Encoding(char input[100],int len){
    int count=1;
    printf("output: ");
    for(int i=0;i<len;i++){
        if(isalpha(input[i])){
            if(input[i]==input[i+1]){
                count++;

            }else{
                printf("%c""%d",input[i],count);
                count=1;
            }
            
        }
    }
}
int main(){
    char in[100];
    printf("Enter the string: ");
    fgets(in,sizeof(in),stdin);
    Run_Length_Encoding(in,strlen(in));
    
}
//strlen(input) tells you how many characters the user entered.
//sizeof(input) always returns 100, so you'd be looping over many uninitialized characters (junk).