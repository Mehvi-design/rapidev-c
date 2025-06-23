#include<stdio.h>
void print_1_to_10(){
    printf("Starting Count from 1 to 10\n");
        for(int i=1;i<=10;i++){//loop to print number ffrom 1 to 10
            printf("%d\n",i);
        }
}
int main()
{  
    print_1_to_10();//calling the function
    return 0;
}