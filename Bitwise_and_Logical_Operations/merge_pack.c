#include<stdio.h>
#include<stdint.h>
uint8_t pack_4bit(uint8_t high, uint8_t low){
    
    return(high&0xF0)|(low&0x0F);
}
void binary(uint8_t input){
    printf("In binary:0b");
    for(int i=7;i>=0;i--){
        printf("%c",(input&(1<<i))?'1':'0');
    }
    printf("\n");
}
int main(){
    uint8_t high= 0x85;//10000101
    uint8_t low =0x75;//01110101
    binary(high);
    binary(low);
    binary(pack_4bit(high, low));
}