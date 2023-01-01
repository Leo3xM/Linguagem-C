#include <stdio.h>

int main()
{
    int X, i, P;

    scanf("%d", &X);

    for (i = 2; i <= X; i += 2)
    {
        P = i * i;

        printf("%d^2 = %d\n", i, P);
    }

    return 0;
}
