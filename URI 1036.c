#include <stdio.h>
#include <stdlib.h>

void main(){
    
    double valueA, valueB, valueC;
    double delta, delta_raiz;
    double e, f, g;

    scanf("%lf %lf %lf", &valueA, &valueB, &valueC);

    delta = valueB*valueB - 4*valueA*valueC;
    delta_raiz = pow(delta, .5);

    if(delta < 0 || valueA == 0){
        printf("Impossivel calcular\n");
    }else{

        f = (-valueB + delta_raiz) /( 2 * valueA);
        g = (-valueB - delta_raiz) /( 2 * valueA);

        printf("R1 = %.5lf\n", f);
        printf("R2 = %.5lf\n", g);

    }

}
