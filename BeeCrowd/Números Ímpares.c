#include <stdio.h>

int main()
{
    int X, R, i;

    scanf("%d", &X);

    for (i = 0; i <= X; i++)
    {
        R = i % 2;

        if (R == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
