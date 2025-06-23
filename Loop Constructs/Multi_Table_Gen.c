#include<stdio.h>
int main(){
    int num,result;
    printf("Input the number whose multiplication table you want?:");
    scanf("%d",&num);
    printf("The Multiplication table of %d is:\n",num);
    for(int i=0;i<=10;i++){
        result=num*i;
        printf("%d\t x\t %d\t = %d\n",num,i,result);
}
}