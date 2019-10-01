#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char tipo_coluna[15];
    char tipo_classe[15];
    char tipo_comida[15];

    scanf("%s", tipo_coluna);
    scanf("%s", tipo_classe);
    scanf("%s", tipo_comida);
/* ====================  VERIFICA VERTEBRADOS ====================================*/ 
    if(tipo_coluna[0] == 'v' && tipo_classe[0] == 'a' && tipo_comida[0] == 'c'){
        printf("aguia\n");
    }if(tipo_coluna[0] == 'v' && tipo_classe[0] == 'a' && tipo_comida[0] == 'o'){
        printf("pomba\n");
    }if(tipo_coluna[0] == 'v' && tipo_classe[0] == 'm' && tipo_comida[0] == 'o'){
        printf("homem\n");
    }if(tipo_coluna[0] == 'v' && tipo_classe[0] == 'm' && tipo_comida[0] == 'h'){
        printf("vaca\n");}

/*  =================== VERIFICA INVERTEBRADOS ===================================*/
    if(tipo_coluna[0] == 'i' && tipo_classe[0] == 'i' && tipo_comida[2] == 'm'){
        printf("pulga\n");
    }if(tipo_coluna[0] == 'i' && tipo_classe[0] == 'i' && tipo_comida[2] == 'r'){
        printf("lagarta\n");
    }if(tipo_coluna[0] == 'i' && tipo_classe[0] == 'a' && tipo_comida[0] == 'h'){
        printf("sanguessuga\n");
    }if(tipo_coluna[0] == 'i' && tipo_classe[0] == 'a' && tipo_comida[0] == 'o'){
        printf("minhoca\n");
    }
}
