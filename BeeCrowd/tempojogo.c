#include <stdio.h>

int main()
{
    int I, F, T;

    scanf("%d %d", &I, &F);

    if (I < F)
    {
        T = F - I;
        printf("O JOGO DUROU %d HORA(S)\n", T);
    }
    else if (I >= F)
    {
        T = (24 - I) + F;
        printf("O JOGO DUROU %d HORA(S)\n", T);
    }
    return 0;
}