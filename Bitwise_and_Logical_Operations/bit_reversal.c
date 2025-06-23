#include<stdio.h>
#include<stdint.h>
uint8_t reverse_bits(uint8_t byte){

}  // e.g., 0b10000001 → 0b10000001
void binary(uint8_t input){
    printf("\nThe result in binary is 0b");
   for(int i=7;i>=0;i--){
    printf("%c",(input&(1<<i))? '1':'0');//00001001
   }
   printf("\n");
}
int main(){
 uint8_t byte=0x56;
 binary(byte);
}