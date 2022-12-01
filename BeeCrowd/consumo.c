#include <stdio.h>

int main()
{
    int KM;
    double L;

    scanf("%d\n", &KM);
    scanf("%lf", &L);

    double razao;
    razao = KM / L;

    printf("%.3lf km/l\n", razao);

    return 0; 
}