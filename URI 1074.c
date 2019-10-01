#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int i;
    int x;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &x);
        if(x==0){
            printf("NULL\n");
        }else if(x % 2 == 0){
            if(x>0){
            printf("EVEN POSITIVE\n");
        }else{
            printf("EVEN NEGATIVE\n");
        }
        
        
    }else{
        if(x<0){
            printf("ODD NEGATIVE\n");
        }else{
            printf("ODD POSITIVE\n");
        }
    }
}
}
