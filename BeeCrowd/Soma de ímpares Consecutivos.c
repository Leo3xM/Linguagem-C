#include <stdio.h>

int main()
{
    int N1, N2, menor, maior, R, S;
    S = 0;

    scanf("%d\n%d", &N1, &N2);

    if (N1 < N2)
    {
        menor = N1;
        maior = N2;
    }
    else if (N2 <= N1)
    {
        menor = N2;
        maior = N1;
    }

    R = menor % 2;

    if (R == 0)
    {
        menor += 1;

        while (menor < (maior - 1))
    {
        S += menor;

        menor += 2;
    }

    printf("%d\n", S);
    }

    else if (R == 1 || R == -1)
    {
        while (menor < (maior - 1))
    {
        menor += 2;

        S += menor;
    }

    printf("%d\n", S);
    }

    return 0;
}
