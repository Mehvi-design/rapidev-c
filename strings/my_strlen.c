#include<stdio.h>
#include <stddef.h> // For size_t
size_t my_strlen(const char *str){//size_t is unsigned 

   size_t length=0;
   while(*str!='\0'){
    length++;
    str++;

   }
   return length;
}
    
int main(){
        char str[]= "hello world";
    printf("%d",my_strlen(str));
}