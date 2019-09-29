#include <stdio.h>
#include <stdlib.h>

void main(){
    double nota_a;
    double nota_b;
    double nota_c;
    double calc_peso;
    double media;

scanf("%lf", &nota_a);
scanf("%lf", &nota_b);
scanf("%lf", &nota_c);
calc_peso = ( nota_a * 2 ) + ( nota_b * 3 ) + ( nota_c * 5 );
media = calc_peso / 10;
printf("MEDIA = %.1lf\n", media);


}
