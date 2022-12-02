#include <stdio.h>

int main()
{
    int A, B, C, D, H, M;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (A > C && B > D)
    {
        H = ((24 - A) + C) - 1;
        M = (60 - B) +  D;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else if (A > C && B <= D)
    {
        H = (24 - A) + C;
        M = D - B;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }

    else if (A < C && B > D)
    {
        H = (C - A) - 1;
        M = (60 - B) +  D;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else if (A < C && B <= D)
    {
        H = C - A;
        M = D - B;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else if (A == C && B > D)
    {
        H = 23;
        M = (60 - B) +  D;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else if (A == C && B < D)
    {
        H = 0;
        M = D - B;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    else if (A == C && B == D)
    {
        H = 24;
        M = 0;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", H, M);
    }
    
    return 0;

}