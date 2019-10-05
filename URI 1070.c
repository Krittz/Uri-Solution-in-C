#include <stdio.h>
#include <stdlib.h>

void main(){
    int entrada = 0;
    int i;
    scanf("%d", &entrada);
    for( i = 1; i <= 11; i++){
        entrada++;
        if(entrada % 2 != 0 ){
            printf("%d\n", entrada);
        }
    }
}
