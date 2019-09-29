#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void main(){
    char name[25];
    double value_fix;
    double value_sale;
    double calc_percent;
gets(name);
scanf("%lf", &value_fix);
scanf("%lf", &value_sale);
calc_percent =( (value_sale * 0.15) + value_fix);
printf("TOTAL = R$ %.2lf\n", calc_percent);

}
