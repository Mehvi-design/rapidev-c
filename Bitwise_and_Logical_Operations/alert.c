#include<stdio.h>
#include<stdbool.h>
bool should_alert(int temp, int pressure, bool enabled){//give true or false depending on conditions
    return enabled&&((temp<0||temp>100)||(pressure<30||pressure>70));//setting the conditions 
}
int main(){
    int T,P,E;
    printf("Input the temperature?(centigrade): ");
    scanf("%d",&T);
    printf("Input the pressure?(Pounds per Square Inch (PSI)): ");
    scanf("%d",&P);
    printf("Enable the system(1/0?: ");
    scanf("%d",&E);
    bool e=(E)?true:false;
    printf("The alert should be %s",(should_alert(T, P, e))?"ON":"OFF");
}