#include <stdio.h>

int main()
{
    int number = 1;

    while(number != 2002)
    {
        scanf("%d", &number);
        if(number == 2002){
            printf("Acesso Permitido\n" );
            return 0;
        }else{
            printf("Senha Invalida\n" );
        }

    }

    return 0;
}
