#include <stdio.h>

int main()
{
    int X, i, M;

    scanf("%d", &X);

    for (i = 1; i <= 10; i ++)
    {
        M = i * X;

        printf("%d x %d = %d\n",i, X, M);
    }

    return 0;
}