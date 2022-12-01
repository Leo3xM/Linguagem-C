#include <stdio.h>

int main()
{
    int A, B;

    scanf("%d %d", &A, &B);

    int R1;
    R1 = B % A;
    int R2;
    R2 = A % B;

    if (R1 == 0 || R2 == 0) 
    {
        printf("Sao Multiplos\n");
    }
    else 
    {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}