#include <stdio.h>
#include <stdlib.h>
#define PESO_A 3.5
#define PESO_B 7.5

void main(){
    double nota_a;
    double nota_b;
    double media_a;
    double media_b;
    double nota_media;
        scanf("%lf", &nota_a);
        scanf("%lf", &nota_b);
   media_a = nota_a * PESO_A;
   media_b = nota_b * PESO_B;
   nota_media =( (media_b+ media_a) / 11);
        printf("MEDIA = %.5lf\n", nota_media);
}
