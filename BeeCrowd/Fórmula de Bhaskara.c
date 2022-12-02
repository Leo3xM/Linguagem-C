#include <stdio.h>
#include <math.h>

int main ()
{
    double A, B, C;

    scanf("%lf\n%lf\n%lf", &A, &B, &C);

    double delta;
    delta = (B * B) - (4.0 * A * C);

    double bhask1;
    bhask1 = (((B * (-1.0)) + sqrt(delta)) / (2.0 * A));

    double bhask2;
    bhask2 = (((B * (-1.0)) - sqrt(delta)) / (2.0 * A));

    if (delta < 0)
    {
        printf("Impossivel calcular\n");
    }
    else if (A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else 
    {
        printf("R1 = %.5lf\nR2 = %.5lf\n", bhask1, bhask2);
    }
    
    return 0;
}
