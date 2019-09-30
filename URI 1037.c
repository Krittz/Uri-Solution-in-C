#include <stdio.h>
#include <stdlib.h>
// INTERVALOS ([0,25], (25,50], (50,75], (75,100])
void main(){

   double value;
   scanf("%lf", &value);

    if (value >= 0 && value<= 25.00 ){

        printf("Intervalo [0,25]\n");

    }else if(value > 25.00 && value<= 50.00){

        printf("Intervalo (25,50]\n");

    }else if(value > 50.00 && value <= 75.00){

        printf("Intervalo (50,75]\n");

    }else if(value > 75.00 && value <= 100.00){

        printf("Intervalo (75,100]\n");

    }else{
        printf("Fora de intervalo\n");
    }


}
