#include <stdio.h>

int main()
{
    double S;

    scanf("%lf", &S);

    double X, A;
    X = S - 2000.00;

    if (X <= 0)
    {
        printf("Isento\n");
    } 
    else if (X > 0 && X <= 1000.0)
    {
        A = 0.08 * X;
        printf("R$ %.2lf\n", A);
    }
    else if (X > 1000.0 && X <= 2500.0)
    {
        A = (1000 * 0.08) + ((X - 1000.0) * 0.18);
        printf("R$ %.2lf\n", A);
    }
    else if (X > 2500.0)
    {
        A = (1000 * 0.08) + (1500 * 0.18) + ((X - 2500.0) * 0.28);
        printf("R$ %.2lf\n", A);
    }

    return 0;
}
