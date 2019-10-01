#include <stdio.h>
#include <stdlib.h>

int main()
{
        int strtTM, endTM, durationTM;
        scanf("%d %d", &strtTM, &endTM);
        durationTM = (endTM - strtTM);
        if (durationTM < 0 )
            {
             durationTM = 24 + (endTM-strtTM);
            }
        if (strtTM == endTM)
            {
                printf("O JOGO DUROU 24 HORA(S)\n");
                }
        else printf("O JOGO DUROU %d HORA(S)\n", durationTM);

        return 0;
}
