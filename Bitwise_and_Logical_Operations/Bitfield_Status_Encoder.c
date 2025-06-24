#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
//macros
#define SENSOR_TEMP    (1 << 0)
#define SENSOR_PRESS   (1 << 1)
#define SENSOR_VIB     (1 << 2)
uint8_t encode_sensors(bool temp, bool press, bool vib){
    uint8_t initial=0x0;
if(temp){
 initial|=SENSOR_TEMP;
}
if(press){
 initial|=SENSOR_PRESS;
}
if(vib){
 initial|=SENSOR_VIB;
}
printf("The bitfield status encoder is : %d\n",initial);
return initial;
}
void binary(uint8_t input){//function that converts into binary
    printf("\nThe result in binary is 0b");
   for(int i=7;i>=0;i--){
    printf("%c",(input&(1<<i))? '1':'0');//if the bit gives 1 after and with 1 it is 1 otherwise 0,we have used shifting
   }
   printf("\n");
}
int main(){
  bool t,p,v;
  int temp_input,press_input,vib_input;
  printf("Type 1/0 to indicate if temperature sensor,pressure sensor and vibration sensor is on?:\n ");
  scanf("%d %d %d",&temp_input,&press_input,&vib_input);
  t=temp_input?true:false;
  p=press_input?true:false;
  v=vib_input?true:false;
  binary(encode_sensors( t, p,v));

}