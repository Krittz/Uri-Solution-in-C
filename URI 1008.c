#include <stdio.h>
#include <stdlib.h>

void main(){
    int num_id;
    int work_time;
    float value_time;
    float total_value;
    scanf("%d", &num_id);
    scanf("%d", &work_time);
    scanf("%f", &value_time);
total_value = work_time * value_time;
printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_id, total_value);


}
