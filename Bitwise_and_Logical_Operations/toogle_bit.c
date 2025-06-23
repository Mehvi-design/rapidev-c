#include<stdio.h>
#include<stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t bit_pos){
     return reg^bit_pos;
}
void binary(uint8_t input){
    printf("\nThe result in binary is 0b");
   for(int i=7;i>=0;i--){
    printf("%c",(input&(1<<i))? '1':'0');//00001001
   }
   printf("\n");
}
int main(){
    uint8_t in=0x01;//00000001
    binary(in);
    int mask=3;//4th bit 0 indexed
    uint8_t bit_mask=1<<mask;//00001000
    printf("%d",toggle_bit(in, bit_mask));
    binary(toggle_bit(in, bit_mask));
}