#include <stdio.h>
#include <math.h>

int main(){

    int num;
    int i;
    scanf("%d", &num);

        for(i = 1; i <= num; i++){

            if( i % 2 == 0){
                printf("%d^2 = %d\n", i, (i*i));
            }
        }
return 0;
}
