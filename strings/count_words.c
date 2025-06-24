#include<stdio.h>
#include<string.h>
#include<ctype.h>
int count_words(const char *sentence){
    int in_word=0;
    int count=0;
    for(int i=0;sentence[i]!='\0';i++){
        if(isspace(sentence[i])){//if the element is space i.e " "
            in_word=0;
        }
        if(in_word==0){
            in_word=1;
            count++;
        }
    }
    return count;

}
int main(){
    char sentence[]="hello world in rapidev!";
    printf("The total words are %d",count_words(sentence));
}