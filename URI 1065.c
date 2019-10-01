#include <stdio.h>
#include <stdlib.h>

void main(){
    int valores[5];
    int cont_par=0;
    int cont_imp=0;
    int i = 0;

    for(i = 0; i < 5; i++){

        scanf("%d", &valores[i]);

            if(valores[i]%2 == 0){
                
                cont_par++;

        }else cont_imp++;
        
    }
    printf("%d valores pares\n", cont_par);
}
