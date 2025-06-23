#include<stdio.h>

int main(){
    int A,B;
    printf("Type the number A and B:\t\n");
    scanf("%d""%d",&A ,&B);
    printf("The A number is:%d\t",A);
    printf("\n");
    printf("The B number is:%d\n",B);
    printf("The even numbers between \"%d\"and\"%d\"are:",A,B);
    for(int i=A+1;i<B;i++){ //for loop which whose range is between A and B
        if(i%2==0){ //checks if the modulus of the number with 2 is zero
            printf("%d",i);//prints it
            if(i<B-1){
                printf(",");
            }
        }
    }
    return 0;
}