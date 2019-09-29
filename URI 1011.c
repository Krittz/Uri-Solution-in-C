#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void main(){

    double raio;
    double volume;
    double pi = 3.14159;
    scanf("%lf", &raio);
    
    volume =( (4.0/3.0) * pi * pow(raio, 3));
    printf("VOLUME = %.3lf\n", volume);

}
