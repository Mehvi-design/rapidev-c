#include<stdio.h>
int sum_upto_n(int n){//function to add the numbers upto n
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i; //adds the number to sum
    }
    return sum;
}
int main(){
  int N,sum;
  printf("Uptil how many number you want to add:\t");
  scanf("%d",&N);
  sum=sum_upto_n(N);
  printf("The sum to N number is:\t");
  printf("%d",sum);
  return 0;
}