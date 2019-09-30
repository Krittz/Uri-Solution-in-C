#include <stdio.h>
#include <stdlib.h>

void main(){
    int distancia;
    double comb_gasto;
    double consume;

    scanf("%d", &distancia);
    scanf("%lf", &comb_gasto);

    consume = (distancia / comb_gasto);

    printf("%.3lf km/l\n", consume);
    getchar();
}
