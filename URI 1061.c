#include <stdio.h>
#include <stdlib.h>

void main(){

    char A[4], B[2], C[2], D[2], E[2], F[4];

    int I,J,K,L,M,N,P,Q,R,S,T,U,V,W,X,Y,Z,H[5];
    
    scanf("%s%d", A, &I);
    scanf("%d%s%d%s%d", &J,&B,&K,&C,&L);
    scanf("%s%d", &F, &P);
    scanf("%d%s%d%s%d", &Q, &D, &R, &E, &S);

    M = 60 - L + S;
    N = (60 - K - 1 + R) * 60;
    T = (24 - 1 -J + Q) * 3600;
    U = (P - I -1) * 86400; 
    V = M + N + T + U;

    H[0] = V / 86400;
    printf("%d dia(s)\n", H[0]);

    H[0] = V % 86400;
    H[1] = H[0]/3600;
    printf("%d hora(s)\n", H[1]);

    H[1] = H[0] %  3600;
    H[2] = H[1] / 60;
    printf("%d minuto(s)\n", H[2]);

    H[2] = H[1] % 60;
    printf("%d segundo(s)\n", H[2]);

}
