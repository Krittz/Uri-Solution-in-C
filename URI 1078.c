#include <stdio.h>
#include <stdlib.h>

int main(){

    int entrada;
    int resultado;
    int i;
    scanf("%d", &entrada);

    for (i=1; i<=10; i++){
        resultado = i*entrada;
        printf("%d x %d = %d\n",i, entrada, resultado );
    }
    return 0;
}
