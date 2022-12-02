#include <stdio.h>

int main()
{
    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);

    double P, X;
    P = A + B + C;
    X = ((A + B) * C) / 2;

    if (A >= B && B >= C)
    {
        if ((B + C) > A)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((B + C) <= A)
        {
            printf("Area = %.1lf\n", X);
        }
    }

    else if (A >= C && C >= B)
    {
        if ((B + C) > A)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((B + C) <= A)
        {
            printf("Area = %.1lf\n", X);
        }
    }

    else if (B >= A && A >= C)
    {
        if ((A + C) > B)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((A + C) <= B)
        {
            printf("Area = %.1lf\n", X);
        }
    }

    else if (B >= C && C >= A)
    {
        if ((A + C) > B)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((A + C) <= B)
        {
            printf("Area = %.1lf\n", X);
        }
    }

    else if (C >= A && A >= B)
    {
        if ((A + B) > C)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((A + B) <= C)
        {
            printf("Area = %.1lf\n", X);
        }
    }

    else if (C >= B && B >= A)
    {
        if ((A + B) > C)
        {
            printf("Perimetro = %.1lf\n", P);
        }
        else if ((A + B) <= C)
        {
            printf("Area = %.1lf\n", X);
        }
    }
    
    return 0;
}
