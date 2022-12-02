#include <stdio.h>

int main()
{
    double N1, N2, N3, N4, N5;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    double media;
    media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4)) / 10;

    if (media >= 7.0)
    {
        printf("Media: %.1lf\nAluno aprovado.\n", media);
    }
    else if (media < 5.0)
    {
        printf("Media: %.1lf\nAluno reprovado.\n", media);
    }
    else if (media >= 5.0 && media <= 6.9)
    {
        scanf("%lf", &N5);

        double media2;
        media2 = (media + N5) / 2;

        if (media2 >= 5.0)
        {
        printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno aprovado.\nMedia final: %.1lf\n", media, N5, media2);
        }
        else if (media2 < 5.0)
        {
        printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno reprovado.\nMedia final: %.1lf\n", media, N5, media2);
        }
    }
    
    return 0;
}
