#include<stdio.h>
#include<stdint.h>

typedef struct {
uint8_t direction;//output 1,input 0
uint8_t output;//pin output values
uint8_t input;//pin input values
} GPIO_Port;
//macros
//read input and output values
#define GPIO_READ_INPUTPIN(PORT,pin)
#define GPIO_READ_OUTPUTPIN(PORT,pin)
//write specific output pins high or low
#define GPIO_WRITE_OUTPINHIGH(PORT,mask)
#define GPIO_WRITE_OUTINLOW(PORT,mask)
//write specific input pins low or high
#define GPIO_WRITE_INPINLOW(PORT,mask)
#define GPIO_WRITE_INPINHIGH(PORT,mask)
//Set directio of specific pins input or high
#define GPIO_SET_PINOUTPUT(PORT,mask)
#define GPIO_SET_PININPUT(PORT,mask)(PORT.input=)
//toggle specific bit
#define GPIO_TOGGLE_OUTPIN(PORT,mask)((PORT).output^=(mask))
#define GPIO_TOGGLE_INPIN(PORT,mask)((PORT).input^=(mask))

int main(){
    GPIO_Port portA={0};
    printf("%d",GPIO_TOGGLE_INPIN(portA,1));
}























