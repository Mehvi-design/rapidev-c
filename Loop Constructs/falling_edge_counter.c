#include<stdio.h>
#include<stdbool.h>

int count_falling_edges(const bool signal[], int len){
  int count=0;
  if (len>=2){
    for(int i=0;(i<len)&&(i+1<len);i++){
      if((signal[i]==true)&&(signal[i+1]==false)){//bitwise & is not prefered in if conditions
        //a = 4, b = 2: if (a & b) → false (since 0100 & 0010 = 0000),But both are non-zero (true-ish!), so if (a && b) → true


        count++;
      }
    }
  }
  else{
    printf("Invalid signal");
  }
  return count;
}
int main(){
const bool edges[]={true,false,true,true,false,true,false,true};
printf("%d",count_falling_edges(edges,sizeof(edges)));

}