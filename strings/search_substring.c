#include<stdio.h>

char *my_strstr(const char *haystack, const char *needle){
    if(*needle=='\0'){ //if needle pointer points to null
        return (char *)haystack;//return the whole string
    }
    while(*haystack!='\0'){ //if haystack pointer is not pointing at null keep this loop going
        const char *np_tr= needle;
        const char *hp_tr= haystack;
        while(*np_tr!='\0'&&*hp_tr==*np_tr){
            *hp_tr++;
            *np_tr++;
        }
        if(*np_tr=='\0'){
            return (char*)haystack;
        }
        haystack++;
    }
    return NULL;

}
int main(){
    printf("%s",my_strstr("hello world","world"));

}