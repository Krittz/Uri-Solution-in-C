#include <stdio.h>
#include <stdlib.h>

void main(){
    int valueX, valueY, valueA, valueB, valueC,valueD;

    scanf("%d%d%d%d", &valueA, &valueX, &valueB, &valueY);

    if(valueA == valueY && valueB == valueY && valueY == valueX ){
        
        valueC = valueX - valueY;
        valueD = 24 + valueA - valueB;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC); 

    }else if(valueA == valueB && valueY > valueX){

        valueC = valueY - valueX;
        valueD = valueA - valueB;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueA == valueB && valueX > valueY){
        
        valueC = 60 - valueY + valueX;
        valueD = 24 - valueA + valueB - 1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueX == valueY && valueA < valueB){

        valueC = 0;
        valueD = valueB - valueA;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueX == valueY && valueA > valueB){

        valueC = 0;
        valueD = 24 - valueA+ valueB;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueB > valueA && valueY > valueX){

        valueC = valueY - valueX;
        valueD = valueB - valueA;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueA < valueB && valueX > valueY){

        valueC = 60 - valueX + valueY;
        valueD = valueB - valueA -1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if (valueA > valueB && valueX < valueY){

        valueC = valueY - valueX;
        valueD = 24 - valueA - 1 + valueB;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }else if(valueA > valueB && valueX > valueY){

        valueC = 60 + valueY - valueX;
        valueD = 24 + valueB - valueA -1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", valueD, valueC);

    }
    
}
