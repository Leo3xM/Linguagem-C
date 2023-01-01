#include <stdio.h>

int main()
{
    double A, B, C, D, E, F;
    int X;
    X = 0;

    scanf("%lf\n%lf\n%lf\n%lf\n%lf\n%lf", &A, &B, &C, &D, &E, &F);

    if (A > 0)
    {
        X += 1;
    }
    if (B > 0)
    {
        X += 1;
    }
    if (C > 0)
    {
        X += 1;
    }
    if (D > 0)
    {
        X += 1;
    }
    if (E > 0)
    {
        X += 1;
    }
    if (F > 0)
    {
        X += 1;
    }

    printf("%d valores positivos\n", X);

    return 0;
}
