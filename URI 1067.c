#include <stdio.h>
#include <stdlib.h>

void main(){

    int valor =0;
    int i = 0;

    scanf("%d", &valor);

   for( i = 0; i <= valor; i++){
       if (i%2 != 0){
           printf("%d\n",i);
       }
   }
}
