#include <stdio.h>
#include <stdlib.h>

/*
se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
*/
void main(){

    double valorA, valorB, valorC, temp;

    scanf("%lf %lf %lf", &valorA, &valorB, &valorC);
    
    if(valorA < valorB){

        temp = valorA;
        valorA = valorB;
        valorB = temp;

    }if(valorB < valorC){

        temp = valorB;
        valorB = valorC;
        valorC = temp;

    }if(valorA < valorB){

        temp = valorA;
        valorA = valorB;
        valorB = temp;

    }
    if(valorA >= valorB+valorC){

        printf("NAO FORMA TRIANGULO\n");

    }else if(valorA*valorA == valorB*valorB + valorC*valorC){

        printf("TRIANGULO RETANGULO\n");

    }else if(valorA*valorA > valorB*valorB + valorC*valorC){

        printf("TRIANGULO OBTUSANGULO\n");

    }else if(valorA*valorA < valorB*valorB + valorC*valorC){

        printf("TRIANGULO ACUTANGULO\n");

    }


    if(valorA == valorB && valorA == valorC){

        printf("TRIANGULO EQUILATERO\n");

    }else if(valorA == valorB || valorB == valorC){

        printf("TRIANGULO ISOSCELES\n");
    }
}
