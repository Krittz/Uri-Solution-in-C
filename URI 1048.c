#include <stdio.h>
#include <stdlib.h>

/*
0 - 400.00 --------------15%
400.01 - 800.00----------12%
800.01 - 1200.00---------10%
1200.01 - 2000.00--------7%
Acima de 2000.00---------4%   */
void main(){
    void quinze(double entrada);
    void doze(double entrada);
    void dez(double entrada);
    void sete(double entrada);
    void quatro(double entrada);
    double entry;
        scanf("%lf", &entry);

if(entry > 0 && entry <=400){
    quinze(entry);
}else if(entry > 400 && entry <=800){
    doze(entry);
}else if(entry > 800 && entry <=1200){
    dez(entry);
}else if(entry > 1200 && entry<=2000){
    sete(entry);
}else if(entry > 2000){
    quatro(entry);
}


}
void quinze(double entrada){
    double final;
    double porcent;
    porcent = entrada * 0.15;
    final = entrada + porcent;
    printf("Novo salario: %.2lf\n", final);
    printf("Reajuste ganho: %.2lf\n", porcent);
    printf("Em percentual: 15 %%\n");
}

void doze(double entrada){
    double final;
    double porcent;
    porcent = entrada * 0.12;
    final = entrada + porcent;
    printf("Novo salario: %.2lf\n", final);
    printf("Reajuste ganho: %.2lf\n", porcent);
    printf("Em percentual: 12 %%\n");
}
void dez(double entrada){
    double final;
    double porcent;
    porcent = entrada * 0.10;
    final = entrada + porcent;
    printf("Novo salario: %.2lf\n", final);
    printf("Reajuste ganho: %.2lf\n", porcent);
    printf("Em percentual: 10 %%\n");
}

void sete(double entrada){
    double final;
    double porcent;
    porcent = entrada * 0.07;
    final = entrada + porcent;
    printf("Novo salario: %.2lf\n", final);
    printf("Reajuste ganho: %.2lf\n", porcent);
    printf("Em percentual: 7 %%\n");
}

void quatro(double entrada){
    double final;
    double porcent;
    porcent = entrada * 0.04;
    final = entrada + porcent;
    printf("Novo salario: %.2lf\n", final);
    printf("Reajuste ganho: %.2lf\n", porcent);
    printf("Em percentual: 4 %%\n");
}
