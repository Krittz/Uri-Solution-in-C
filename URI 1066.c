#include <stdio.h>
#include <stdlib.h>

void main(){
    int valores[5];
    int cont_par=0;
    int cont_imp=0;
    int cont_posi=0;
    int cont_nega=0;
    int i = 0;

    for(i = 0; i < 5; i++){

        scanf("%d", &valores[i]);

            if(valores[i]%2 == 0 || valores[i]==0){
                
                cont_par++;

        }else cont_imp++;
// =========== POLARIDADE -=================
        if(valores[i]>0){

            cont_posi++;

        }else if(valores[i]<0)
            cont_nega++;

    }
    printf("%d valor(es) par(es)\n", cont_par);
    printf("%d valor(es) impar(es)\n", cont_imp);
    printf("%d valor(es) positivo(s)\n", cont_posi);
    printf("%d valor(es) negativo(s)\n", cont_nega);
}

