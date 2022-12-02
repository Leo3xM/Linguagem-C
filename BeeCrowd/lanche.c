#include <stdio.h>

int main()
{
    int X, Y;

    scanf("%d %d", &Y, &X);

    if (Y == 1)
    {
        printf("Total: R$ %.2lf\n", (X * 4.00));
    }
    else if (Y == 2)
    {
        printf("Total: R$ %.2lf\n", (X * 4.50));
    }
    else if (Y == 3)
    {
        printf("Total: R$ %.2lf\n", (X * 5.00));
    }
    else if (Y == 4)
    {
        printf("Total: R$ %.2lf\n", (X * 2.00));
    }
    else if (Y == 5)
    {
        printf("Total: R$ %.2lf\n", (X * 1.50));
    }
    
    return 0;
}