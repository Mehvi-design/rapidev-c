#include<stdio.h>
#include<stdbool.h>
bool system_health_ok(bool sensor_ok, bool memory_ok, bool watchdog_triggered){
    return sensor_ok && memory_ok && !watchdog_triggered;//for system helath sensor should be ok,memory should be ok and watchdog timer is off
}
int main(){
    int sensor_input,memory_input,watchdog_input;
    bool sensor,memory,watchdog;
    printf("Enter (1/0)if sensors are working fine?: ");
    scanf("%d",&sensor_input);
    printf("Enter (1/0)if memory is ok?: ");
    scanf("%d",&memory_input);
    printf("Enter (1/0)if watchdog timer is running?: ");
    scanf("%d",&watchdog_input);
    sensor=(sensor_input)?true:false;
    watchdog=(watchdog_input)?true:false;
    memory=(memory_input)?true:false;
    
    if (system_health_ok(sensor, memory, watchdog)){
        printf("system is ok");
    }
    else{
        printf("system not ok");
    }
    return 0;
}