// URI 1002 SOLUTION IN C LANG
#include <stdio.h>
#include <stdlib.h>
#define N 3.14159


int main(){
    double area;
    double raio;
    scanf("%lf", &raio);
    area = (raio*raio)*N;
    printf("A=%.4lf\n", area);   
    
    return 0;
}
