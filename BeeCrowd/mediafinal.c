#include <stdio.h>

int main()
{
    double P1, P2, P3;
    double T;
    double L1, L2, L3, L4, L5;

    scanf("%lf %lf %lf\n", &P1, &P2, &P3);
    scanf("%lf\n", &T);
    scanf("%lf %lf %lf %lf %lf", &L1, &L2, &L3, &L4, &L5);

    double ML;
    ML = (L1 + L2 + L3 + L4 + L5) / 10;

    double MF;
    MF = (((P1) + (2 * P2) + (3 * P3) + (2 * T)) / 8) + ML;

    printf("%.2lf\n", MF);

    return 0;
}