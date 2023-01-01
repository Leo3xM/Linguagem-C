#include <stdio.h>

int main()
{
    int R, X, i;

    scanf("%d", &X);

    for (i = 0; i < X; i++)
    {
        R = i % 2;

        if (R == 0)
        {
            printf("THUMS THUMS THUMS\n");
        }
        if (R == 1)
        {
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }

    return 0;
}