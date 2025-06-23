#include<stdio.h>
#include<math.h>
//fermet's test https://www.youtube.com/watch?v=sDrXeCs3ghQ
int main(){
    int num,result;
    printf("Enter the number which you want to check if it s prime or not:");
    scanf("%d",&num);
   for(int i=1;i<num;i++){
      result=pow(i,num)-i;
      if(result%num!=0){
        printf("The number %d is not prime number",num);
        return 0;
      }
   }
  printf("The number %d is a prime number",num);
}