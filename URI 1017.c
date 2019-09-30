#include <stdio.h>
#include <stdlib.h>
#define km_l 12
void main(){

    int time_ride;
    int speed_ride;
    float media_consume;
    
    scanf("%d", &time_ride);
    scanf("%d", &speed_ride);

    media_consume =  (time_ride * speed_ride) ;
    media_consume /= km_l;
    printf("%.3f\n", media_consume);

}
