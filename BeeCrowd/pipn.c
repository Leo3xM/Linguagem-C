#include <stdio.h>

int main()
{
    int A, R, P, i, NP, pos, neg;
    P = 0;
    NP = 0;
    pos = 0;
    neg = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A);

        R = A % 2;

        if (R == 0)
        {
            P += 1;
        }
        else
        {
            NP += 1;
        }
        
        if (A < 0)
        {
            neg += 1;
        }
        else if (A > 0)
        {
            pos += 1;
        }
    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", P, NP, pos, neg);

    return 0;
    }