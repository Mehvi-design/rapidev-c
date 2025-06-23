#include<stdio.h>
#include<stdbool.h>
bool check_access(bool is_admin, bool has_token){
   bool access=is_admin||has_token;
   return access;
}
int main(){
    int admin_input,token_input;
    bool admin,token; 
    printf("is the user admin?:(1/0)\n ");
    scanf("%d",&admin_input);
    printf("Does the user has token?:(1/0)\n ");
    scanf("%d",&token_input);
    admin=admin_input?true:false;
    token=token_input?true:false;
    printf((check_access(admin, token))?"granted access":"no access");
}