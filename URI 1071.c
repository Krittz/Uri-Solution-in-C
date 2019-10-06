#include <stdio.h>
#include <stdlib.h>

void main(){

    int num_a, num_b, num_c = 0;

    scanf("%d %d", &num_a, &num_b);

    if( num_a == num_b){

        printf("%d\n", num_c);
    
    }else if( num_a < num_b){

        for(num_a = num_a + 1; num_a < num_b; num_a++)
        {
            if(num_a % 2 == 1 || num_a % 2 == -1)
            {
                num_c += num_a;
            }
        }
        
        printf("%d\n", num_c);
    
    }else if(num_a > num_b){
        
        for(num_b = num_b + 1; num_b < num_a; num_b++){

            if(num_b % 2 == 1 || num_b % 2 == -1){
             
                num_c += num_b;
            }
        }

        printf("%d\n", num_c);
    }

    }
