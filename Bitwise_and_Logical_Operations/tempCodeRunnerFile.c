#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
#define PERM_READ  (1 << 0)
#define PERM_WRITE (1 << 1)
#define PERM_EXEC  (1 << 2)
bool has_permission(uint8_t user_perm, uint8_t required_perm){
if(user_perm & required_perm){
    return true;
}
}
int main(){
printf("%d",has_permission(0x02, PERM_READ));
}