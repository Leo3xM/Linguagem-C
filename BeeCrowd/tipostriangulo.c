#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, X, Y, Z;

    scanf("%lf %lf %lf", &X, &Y, &Z);

    if (X >= Y && X >= Z)
    {
        A = X;
    }
    else if (Y >= X && Y >= Z)
    {
        A = Y;
    }
    else if (Z >= X && Z >= Y)
    {
        A = Z;
    }

    if ((X <= Y && X >= Z) || (X >= Y && X <= Z))
    {
        B = X;
    }
    else if ((Y <= X && Y >= Z) || (Y >= X && Y <= Z))
    {
        B = Y;
    } 
    else if ((Z <= X && Z >= Y) || (Z >= X && Z <= Y))
    {
        B = Z;
    }

    if (X <= Y && X <= Z)
    {
        C = X;
    }
    else if (Y <= X && Y <= Z)
    {
        C = Y;
    }
    else if (Z <= X && Z <= Y)
    {
        C = Z;
    }

    if ((pow(A, 2)) > ((pow(B, 2)) + (pow(C, 2))) && ((A == B && B != C) || (A != B && B == C ) || (A == C && C != B)))
    {
        printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");
    }
    else if ((pow(A, 2)) > ((pow(B, 2)) + (pow(C, 2))) && (A == B && B == C))
    {
        printf("TRIANGULO OBTUSANGULO\nTRIANGULO EQUILATERO\n");
    }

    else if (((pow(A, 2)) < (pow(B, 2) + pow(C, 2)))  && ((A == B && B != C) || (A != B && B == C ) || (A == C && C != B)))
    {
        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");
    }
    else if (((pow(A, 2)) < (pow(B, 2) + pow(C, 2))) && (A == B && B == C))
    {
        printf("TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n");
    }

    else if (A >= (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if ((pow(A, 2)) == (pow(B, 2)) + (pow(C, 2)))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    return 0;
}