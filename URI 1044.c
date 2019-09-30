#include <stdio.h>
#include <stdlib.h>

void main(){

    int N1, N2;

    scanf("%d %d", &N1, &N2);

    if(N2%N1 == 0 || N1%N2 == 0){

        printf("Sao Multiplos\n");

    }else{

        printf("Nao sao Multiplos\n");

    }
}
