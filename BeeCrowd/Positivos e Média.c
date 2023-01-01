#include <stdio.h>

int main()
{
    double A, B, C, D, E, F, M, media;
    int X;

    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &A, &B, &C, &D, &E, &F);

    X = 0;

    if (A > 0)
    {
        X += 1;
        M += A;
    }

    if (B > 0)
    {
        X += 1;
        M += B;
    }

    if (C > 0)
    {
        X += 1;
        M += C;
    }

    if (D > 0)
    {
        X += 1;
        M += D;
    }

    if (E > 0)
    {
        X += 1;
        M += E;
    }

    if (F > 0)
    {
        X += 1;
        M += F;
    }

    media = M / X;

    printf("%d valores positivos\n%.1lf\n", X, media);

    return 0;
}
