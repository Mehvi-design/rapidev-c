#include <stdio.h>
#include <unistd.h> // For sleep()

int decimal_to_binary(unsigned char n){ //unsigned char is used because LED is 8 bit and most are 8 bit
    for(int i=7;i>=0;i--){
        printf("%c",(n&(1<<i))?'1':'0');//'1' represents the single line character with ASCI 49//"1" represents string
        //1 is shift left to 7th position
        //00000001 & 10000000
    }
    printf("\n");
}
void simulate_led_shift(){
    unsigned char led=1; // Represents decimal 10//decimal_to_binary(led);
    printf("%X\n",led);
    for(int i=1;i<8;i++){
        usleep(500000);//500 x10^-3x10^+6 us
        led=led<<1; //Led'bits are shift left by 1
        decimal_to_binary(led);
        printf("%X\n",led);//FaOR upper letter Hex use %X for lower letter Hex use %x
    }
}

int main() {
   
    simulate_led_shift();
    return 0;
}