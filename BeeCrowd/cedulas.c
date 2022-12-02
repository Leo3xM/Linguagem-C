#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);

    int m100 = X / 100;

    int m50 = (X % 100) / 50;

    int m20 = ((X % 100) % 50) / 20;

    int m10 = (((X % 100) % 50) % 20) / 10;

    int m5 = ((((X % 100) % 50) % 20) % 10) / 5;

    int m2 = (((((X % 100) % 50) % 20) % 10) % 5) / 2;

    int m1 = ((((((X % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("%d\n", X);
    printf("%d nota(s) de R$ 100,00\n", m100);
    printf("%d nota(s) de R$ 50,00\n", m50);
    printf("%d nota(s) de R$ 20,00\n", m20);
    printf("%d nota(s) de R$ 10,00\n", m10);
    printf("%d nota(s) de R$ 5,00\n", m5);
    printf("%d nota(s) de R$ 2,00\n", m2);
    printf("%d nota(s) de R$ 1,00\n", m1);
    
    return 0;
}