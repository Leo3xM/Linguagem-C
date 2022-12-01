#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d\n%d", &A, &B);

    int KM;
    KM = A * B;

    double gasto;
    gasto = KM / 12.0;

    printf("%.3lf\n", gasto);
    
    return 0;
}