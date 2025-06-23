#include<stdio.h>
#include<stdint.h>

typedef struct {
uint8_t direction;
uint8_t output;
uint8_t input;
} GPIO_Port;
//macros
#define GPIO_READ_INPUTPIN(PORT,pin)
#define GPIO_READ_OUTPUTPIN(PORT,pin)
#define GPIO_WRITE_PINHIGH(PORT,mask)
#define GPIO_WRITE_PINLOW(PORT,mask)
#define GPIO_SET_PINOUTPUT(PORT,mask)
#define GPIO_SET_PININPUT(PORT,mask)
#define GPIO_TOGGLE_PIN(PORT,mask)(PORT.output=~(PORT.input|(1<<mask)))

int main(){
    GPIO_Port portA={0};
    printf("%d",GPIO_TOGGLE_PIN(portA,0));
}























