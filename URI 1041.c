/*             Y
              |
     Q2       |         Q1
______________|________________X
              |
      Q3      |         Q4
              |
              */

#include <stdio.h>
#include <stdlib.h>

void main(){

    double x_point, y_point;

    scanf("%lf %lf", &x_point, &y_point);

    if(x_point == 0 && y_point == 0){
        
        printf("Origem\n");
    
    }else if (x_point == 0 ){

        printf("Eixo Y\n");
        
    }else if(y_point == 0 ){

        printf("Eixo X\n");
        
    }else if(x_point > 0 && y_point > 0){

        printf("Q1\n");

    }else if(x_point > 0 && y_point < 0){
        
        printf("Q4\n");
    
    }else if(x_point < 0 && y_point > 0){

        printf("Q2\n");

    }else if(x_point < 0 && y_point < 0){

        printf("Q3\n");

    }

}
