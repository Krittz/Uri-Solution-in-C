#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    double x1, x2;
    double y1, y2;
    double result_pot, result_raiz;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    result_pot = pow( ( x2-x1 ) , 2 ) + pow( ( y2 - y1 ) , 2 ) ;
    result_raiz = sqrt(result_pot);

    printf("%.4lf\n", result_raiz);


}
