#include<stdio.h>
#include<stdint.h>

typedef struct {
uint8_t direction;//output 1,input 0
uint8_t output;//pin output values
uint8_t input;//pin input values
} GPIO_Port;
//macros
//read input and output values
#define GPIO_READ_INPUTPIN(PORT,pin)((PORT).input&(1<<pin))
#define GPIO_READ_OUTPUTPIN(PORT,pin)((PORT).output&(1<<pin))
//write specific output pins high or low
#define GPIO_WRITE_OUTPINHIGH(PORT,mask)((PORT).output|=(1<<mask))
#define GPIO_WRITE_OUTINLOW(PORT,mask)((PORT).output&=~(1<<mask))
//write specific input pins low or high
#define GPIO_WRITE_INPINLOW(PORT,mask)((PORT).input&=~(1<<mask))
#define GPIO_WRITE_INPINHIGH(PORT,mask)((PORT).input|=(1<<mask))
//Set direction of specific pins input or high
#define GPIO_SET_PINOUTPUT(PORT,mask)((PORT).direction|=(mask))
#define GPIO_SET_PININPUT(PORT,mask)((PORT).direction&=~(mask))
//toggle specific bit
#define GPIO_TOGGLE_OUTPIN(PORT,mask)((PORT).output^=(1<<mask))
#define GPIO_TOGGLE_INPIN(PORT,mask)((PORT).input^=(1<<mask))

int main(){
    GPIO_Port portA={0};
    printf("%x\n",GPIO_SET_PINOUTPUT(portA,3));
    printf("%x\n",GPIO_SET_PININPUT(portA,2));
    
    portA.input=0x50;//01010000
    printf("%x\n",GPIO_WRITE_INPINLOW(portA,4));//01000000
    printf("%x\n",GPIO_WRITE_INPINHIGH(portA,3));//01001000
    printf("%x\n",GPIO_TOGGLE_INPIN(portA,2));//01001100
    portA.output=0x75;//01110101
    printf("%x\n",GPIO_WRITE_OUTPINHIGH(portA,4));//01110101
    printf("%x\n",GPIO_WRITE_OUTINLOW(portA,3));//01110101
    printf("%x\n",GPIO_TOGGLE_OUTPIN(portA,3));//01111101
    

}























