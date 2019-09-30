#include <stdio.h>
#include <stdlib.h>

void main(){
    int valueA, valueB, valueC, valueD;
    
    scanf("%d %d %d %d", &valueA, &valueB, &valueC, &valueD);

    if ( (valueB > valueC) && (valueD > valueA) && (valueC+valueD >valueA+valueB) && (valueC &&valueD>0) && (valueA%2 ==0) ){
        printf("Valores aceitos\n");

    }else
    {
        printf("Valores nao aceitos\n");
    }
    
}
