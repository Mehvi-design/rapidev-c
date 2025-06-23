#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
bool read_gpio(uint8_t port, uint8_t pin){
//to check if the specific pin is set high or not
 return((port&pin)!=0);//00000001 & 00001000=0x00(False the bit is zero) otherwise (True) bit is 1
}
void set_gpio(uint8_t *port, uint8_t pin){
//to set the input's specific pin high
    *port=(*port^pin);
    printf("The specific pin is set to high hence: %x\n",*port);
}
void clear_gpio(uint8_t *port, uint8_t pin){
//set's the input's specific pin zero
    *port&=(*port^pin);
    printf("The specific pin is set to zero hence: %x\n",*port);
}

int main(){
 uint8_t port=0x01;
 uint8_t pin=0x01;
 printf("The specific pin is %s\n",read_gpio(port, pin)?"high":"low");
 clear_gpio(&port, pin);
 read_gpio(&port, pin);
}