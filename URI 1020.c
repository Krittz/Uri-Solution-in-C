#include <stdio.h>
#include <stdlib.h>

#define year_days 365
#define mounth_days 30

void main(){


    int entry; 
    int days; 
    int mounth; 
    int years; 
    int rest_years;

    scanf("%d", &entry);

    years = entry / year_days;
    rest_years = entry - (years * year_days);
    mounth = rest_years / mounth_days;
    days = rest_years - (mounth * mounth_days);

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", mounth);
    printf("%d dia(s)\n", days);
    
}
