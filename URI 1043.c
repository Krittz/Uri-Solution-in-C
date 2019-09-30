#include <stdio.h>
#include <stdlib.h>

void main(){

    double valor_a, valor_b, valor_c, valor_d;
    
    scanf("%lf %lf %lf", &valor_a, &valor_b, &valor_c);

   
    if(valor_a < valor_b + valor_c && valor_b < valor_a + valor_c && valor_c < valor_a + valor_b){


            printf("Perimetro = %.1lf\n", valor_a + valor_b + valor_c);

    }else{
        
        valor_d = .5 * (valor_a+valor_b) * valor_c;
        printf("Area = %.1lf\n", valor_d);
        
    }
}
