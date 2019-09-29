#include <stdio.h>
#include <stdlib.h>

void main(){

    int id_1, id_2;
    int qntd_1, qntd_2;
    double valor_1, valor_2;
    double result_1, result_2, result_final;
    scanf("%d %d %lf", &id_1, &qntd_1, &valor_1);
    result_1 = (qntd_1 * valor_1);
    scanf("%d %d %lf", &id_2, &qntd_2, &valor_2);
    result_2 = (qntd_2 * valor_2);
    result_final = (result_1 + result_2);
        printf("VALOR A PAGAR: R$ %.2lf\n", result_final);


}
