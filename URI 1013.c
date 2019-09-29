#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int value_a, value_b, value_c;

    scanf("%d %d %d", &value_a, &value_b, &value_c);


    if(value_a > value_b && value_a > value_c){

        printf("%d eh o maior\n", value_a);

    }else if(value_b > value_a && value_b > value_c){

        printf("%d eh o maior\n", value_b);
    
    }else if(value_c > value_a && value_c > value_b){

        printf("%d eh o maior\n", value_c);
    }
}
