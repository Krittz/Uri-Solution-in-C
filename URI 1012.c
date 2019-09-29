#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    void triangulo(double num1, double num2);
    void circulo(double raio);
    void trapezio(double base_a, double base_b, double alutra_c);
    void quadrado(double num);
    void retangulo(double num_a, double num_b);
    double num_a, num_b, num_c;
    scanf("%lf %lf %lf", &num_a, &num_b, &num_c);
    triangulo(num_a, num_c);
    circulo(num_c);
    trapezio(num_a, num_b, num_c);
    quadrado(num_b);
    retangulo(num_a, num_b);
}

void triangulo(double num1, double num2){
    double resultado;
    resultado =( ( num1 * num2 ) / 2 );
    printf("TRIANGULO: %.3lf\n", resultado);
}

void circulo(double raio){
    double pi = 3.14159;
    double resultado;
    resultado = pi * (raio*raio);
    printf("CIRCULO: %.3lf\n", resultado);
}

void trapezio(double base_a, double base_b, double altura_c){
    double resultado;
    resultado =(( base_a + base_b ) * altura_c) / 2;
    printf("TRAPEZIO: %.3lf\n", resultado);

}
void quadrado(double num){
    double resultado = num*num;
    printf("QUADRADO: %.3lf\n", resultado);
    }

void retangulo(double num_a, double num_b){
    double resultado = num_a * num_b;
    printf("RETANGULO: %.3lf\n", resultado);
}
