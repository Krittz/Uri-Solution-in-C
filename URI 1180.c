#include<stdio.h>
int main()
{
    int a[1000],i,k=0,n;
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
 
    int min=a[k];
    for(i=0 ; i<n ; i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            k=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",a[k],k);
     
    return 0;
}
