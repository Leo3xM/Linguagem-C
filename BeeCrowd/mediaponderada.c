#include <stdio.h>

int main()
{
    double X, X2, P1, P2;

    scanf("%lf\n%lf\n%lf %lf", &X, &X2, &P1, &P2);

    double X1;
    X1 = ((X * (P1 + P2)) - (X2 * P2)) / P1;

    printf("%lf\n", X1);
    
    return 0;
}