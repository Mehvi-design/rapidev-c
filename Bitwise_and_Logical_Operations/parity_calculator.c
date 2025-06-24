#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>
bool calculate_even_parity(uint8_t byte){
    int count=0;
  for(int i=7;i>=0;i--){
    if(byte&(1<<i)){ //if byte AND 1 which is left shift by i is true
        count+=1;
    }
  }
  printf("%d\n",count);
  if(count%2==0){//checks even or odd
    return true;
  }
  else{
    return false;
  }
  
}  // Return true if parity is even
int main(){
    uint8_t byte=0x07;
printf("The parity is: %s",(calculate_even_parity(byte))?"Even":"Odd");
}