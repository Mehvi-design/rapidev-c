#include<stdio.h>
void print_circular_buffer(int *buffer, int size, int start, int count){
    for(int i=0;i<count;i++){//2 to 7
            int pos=(i+start)%(size);
            printf("%d,",buffer[pos]);
    }
}
int main(){
    int buffer[100];
    int len;
    printf("Input the size of buffer?: ");
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&buffer[i]);
    }
     for(int i=0;i<len;i++){
        printf("%d,",buffer[i]);
    }
    printf("\n");
    int start_level,print_until;
    do{
    printf("Type the starting position((0-%d)and until how much you want to print the buffer?\n: ",len-1);
    scanf("%d""%d",&start_level,&print_until);
    }while(start_level>=len);
    print_circular_buffer( buffer,len, start_level, print_until);

}