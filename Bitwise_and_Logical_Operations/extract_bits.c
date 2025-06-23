#include<stdio.h>
#include<stdint.h>
uint8_t extract_bits(uint8_t reg){
  return (reg&0x38)>>3;//0x38 = 0b00111000 → masks bits 5, 4, 3
}
void binary(uint8_t state){
 printf("The extracted bits in binary are:0b");
 for(int i=2;i>=0;i--){
 printf("%c",(state&(1<<i))? '1':'0');
 }
}
int main(){
    uint8_t r=0x53;//// 0b0101 0011//from hexadecimal to binary
    binary(extract_bits(r));
}