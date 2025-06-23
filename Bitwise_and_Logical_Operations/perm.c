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
    uint8_t user=PERM_READ|PERM_WRITE;//has permission to read and write
printf("The user has permsission to READ %s\n",(has_permission(user, PERM_READ)?"yes":"no"));
printf("The user has permsission to WRITE %s\n",(has_permission(user, PERM_WRITE)?"yes":"no"));
printf("The user has permsission to EXECUTE %s\n",(has_permission(user, PERM_EXEC)?"yes":"no"));
      user=PERM_READ|PERM_EXEC;//has permission to read and execute
printf("The user has permsission to READ %s\n",(has_permission(user, PERM_READ)?"yes":"no"));
printf("The user has permsission to WRITE %s\n",(has_permission(user, PERM_WRITE)?"yes":"no"));
printf("The user has permsission to EXECUTE %s\n",(has_permission(user, PERM_EXEC)?"yes":"no"));
}