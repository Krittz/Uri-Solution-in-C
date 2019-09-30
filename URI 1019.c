#include <stdio.h>
#include <stdlib.h>

void main(){

    int informed_value;
    int hours, minutes, seconds;
    
    scanf("%d", &informed_value);
    
    hours = informed_value / 3600;
    minutes = informed_value % 3600 / 60;
    seconds = informed_value % 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

}

