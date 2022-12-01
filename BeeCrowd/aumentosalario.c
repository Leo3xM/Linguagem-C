#include <stdio.h>

int main()
{
    double S, R, X;
    char P;
    P = '%';

    scanf("%lf", &S);

    if (S > 0.0 && S <= 400.0)
    {
        R = S * 1.15;
        X = S * 0.15;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %c\n", R, X, P);
    }
    else if (S > 400.0 && S <= 800.0)
    {
        R = S * 1.12;
        X = S * 0.12;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %c\n", R, X, P);
    }
    else if (S > 800.0 && S <= 1200.0)
    {
        R = S * 1.10;
        X = S * 0.10;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %c\n", R, X, P);
    }
    else if (S > 1200.0 && S <= 2000.0)
    {
        R = S * 1.07;
        X = S * 0.07;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %c\n", R, X, P);
    }
    else if (S > 2000.0)
    {
        R = S * 1.04;
        X = S * 0.04;
        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %c\n", R, X, P);
    }
    return 0;
}