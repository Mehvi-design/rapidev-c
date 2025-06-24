#include<stdio.h>

int main(){
    int n;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){//i is column and j is row
        for(int j=1;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
}