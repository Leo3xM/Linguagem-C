#include <stdio.h>

int main()
{
    int A, R, T, i;
    T = 0;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &A);

        R = A % 2;

        if (R == 0)
        {
            T += 1;
        }
        else
        {
            T = T;
        }
    }

    printf("%d valores pares\n", T);

    return 0;
    }