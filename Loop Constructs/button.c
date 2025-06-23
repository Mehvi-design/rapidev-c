#include<stdio.h>
#include <stdbool.h>// for bool

bool debounce_button(const bool samples[], int length){
    int b=0;
    for (int i=0;i<length;i++){
      if (samples[i]==true){
        b++;
        if(b==5){
            return true;
        }
      }
    else{
          b=0;  
        }        
    }
    return false;
}
int main(){
    const bool tests[] = {false, true, true, false, true, true, true, true};
    if(debounce_button(tests, sizeof(tests))){
        printf("Switched is pressed");
    }
    else{
    printf("Switched is not pressed");
    }
}