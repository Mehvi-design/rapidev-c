#include<stdio.h>
#include<stdint.h>
void unpack_4bit(uint8_t packed, uint8_t *high, uint8_t *low){
    *high=(packed&0xF0)>>4;
    *low=(packed&0x0F);
    printf("The four high and low bits are: %d,""%d",*high,*low);
}

int main(){
    uint8_t packed =0xB4;//(Binary: 10110100)
    uint8_t high, low;
    unpack_4bit(packed, &high, &low);
    return 0;
}