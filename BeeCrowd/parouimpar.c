#include <stdio.h>

int main()
{
    int X, i, N, R;

    scanf("%d", &X);

    for (i = 0; i < X; i++)
    {
        scanf("%d", &N);

        R = N % 2;

        if (R == 0 && N > 0)
        {
            printf("EVEN POSITIVE\n");
        }

        else if (R == 0 && N < 0)
        {
            printf("EVEN NEGATIVE\n");
        }

        else if ((R == 1 || R == -1) && N > 0)
        {
            printf("ODD POSITIVE\n");
        }

        else if ((R == 1 || R == -1) && N < 0)
        {
            printf("ODD NEGATIVE\n");
        }

        else if (N == 0)
        {
            printf("NULL\n");
        }
    }
 
    return 0;
}