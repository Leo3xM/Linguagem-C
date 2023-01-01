#include <stdio.h>

int main()
{
    int X, i, in, out, Y;
    in = 0;
    out = 0;

    scanf("%d", &X);

    for (i = 0; i < X; i++)
    {
        scanf("%d", &Y);

        if (Y >= 10 && Y <= 20)
        {
            in += 1;
        }
        else
        {
            out += 1;
        }
    }

    printf("%d in\n%d out\n", in, out);

    return 0;
}
