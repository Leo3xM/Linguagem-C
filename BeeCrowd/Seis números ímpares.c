#include <stdio.h>

int main()
{
    int X, R, P, i;

    scanf("%d", &X);

    R = X % 2;
    P = X + 1;

    if (R == 0)
    {
        printf("%d\n", P);

        for (i = 0; i < 5; i++)
        {
            P += 2;

            printf("%d\n", P);
        }
    }
    else if (R == 1)
    {
        for (i = 0; i < 6; i++)
        {
            printf("%d\n", X);

            X += 2;
        }
    }

    return 0;
}
