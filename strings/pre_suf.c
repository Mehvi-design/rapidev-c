#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool starts_with(const char *str, const char *prefix){
    int prefix_length=strlen(prefix);
    return(strncmp(str,prefix,prefix_length)==0);
}
bool ends_with(const char *str, const char *suffix){
    int suffix_length=strlen(suffix);
    int str_length=strlen(str);
    return (strcmp(str+str_length-suffix_length,suffix)==0);
}
int main(){
    printf("The string start with prefix: %s\n",(starts_with("OpenAI", "Open"))? "Yes":"No");
    printf("The string start with prefix: %s",(ends_with("OpenAI","Open"))? "Yes":"No");
     printf("The string start with prefix: %s",(ends_with("OpenAI","AI"))? "Yes":"No");
    
}