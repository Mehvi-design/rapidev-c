#include<stdio.h>
#include<stdint.h>
uint8_t reverse_bits(uint8_t byte){
    uint8_t fixed=0x00;
    for(int i=0;i<8;i++){
       fixed<<=1;//shift 1 bit to left
       fixed|=(byte&1);//(byte&1)gives LSB and fixed|(LSB) gives the bit into the fixed
       byte>>=1;//shift 1 bit to right so that we can get rest of bits
    }
    return fixed;
}  // e.g., 0b10000001 → 0b10000001
void binary(uint8_t input){
    printf("\nThe result in binary is 0b");
   for(int i=7;i>=0;i--){
    printf("%c",(input&(1<<i))? '1':'0');//00001001
   }
   printf("\n");
}
int main(){
 uint8_t byte=0x53;
 binary(byte);
 binary(reverse_bits(byte));
}