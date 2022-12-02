#include <stdio.h>
#include <math.h>

int main()
{
    double X1, Y1, X2, Y2;

    scanf("%lf %lf\n", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);

    double pit;
    pit = sqrt(pow(X2 - X1, 2.0) + pow(Y2 - Y1, 2.0));

    printf("%.4lf\n", pit);
    
    return 0;
}