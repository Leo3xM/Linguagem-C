#include <stdio.h>

int main()
{
    int X, i, M;
    M = 0;

    scanf("%d", &X);

    for (i = 0; M < 10000; i++)
    {
        M = (i * X) + 2;

        if (M > 10000)
        {
            break;
        }

        printf("%d\n", M);
    }

    return 0;
}
