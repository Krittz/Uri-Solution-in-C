  
#include<stdio.h>

main()
{
	float n;
	int i, po = 0;
	float sum = 0;
	
	for(i = 1; i <= 6; i++){
		scanf("%f",&n);
	
		if(n>0){
			sum = sum + n;
			po = po + 1;
		}
	}
	printf("%d valores positivos\n",po);
	printf("%.1f\n",sum/po);
	
}

