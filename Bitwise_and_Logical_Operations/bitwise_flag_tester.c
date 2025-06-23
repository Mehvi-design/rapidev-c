#include<stdio.h>
#include<stdbool.h>
#include<stdint.h>
#define FLAG_TX_READY  (1 << 0)
#define FLAG_RX_READY  (1 << 1)
#define FLAG_ERROR     (1 << 2)
bool is_flag_set(uint8_t status, uint8_t flag){
   return status & flag;
}
int main(){
 uint8_t status;
 uint8_t flag;
  int flag_input;
 if(is_flag_set(status,FLAG_TX_READY )){
   printf("Trnsmitting flag is enabled\n");
 }
 if(is_flag_set(status,FLAG_RX_READY )){
  printf("Recieving flag is enabled\n");
 }
 if(is_flag_set(status,FLAG_ERROR )){
  printf("Error flag is enabled\n");
}
if(!(is_flag_set(status,FLAG_TX_READY ||FLAG_RX_READY || FLAG_ERROR ))){// 0x01 | 0x02 | 0x04 //0x07 (binary: 00000111)
 printf("no flag is enabled\n");
}

}