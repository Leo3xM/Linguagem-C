#include <stdio.h>

int main()
{
    char A[15], B[15], C[15];

    scanf("%s\n%s\n%s", A, B, C);

    if (A == 'vertebrado' && B == 'ave' && C == 'carnivoro')
    {
        printf("aguia\n");
    }
    else if (A == 'vertebrado' && B == 'ave' && C == 'onivoro')
    {
        printf("pomba\n");
    }
    else if (A == 'vertebrado' && B == 'mamifero' && C == 'onivoro')
    {
        printf("homem\n");
    }
    else if (A == 'vertebrado' && B == 'mamifero' && C == 'herbivoro')
    {
        printf("vaca\n");
    }
    else if (A == 'invertebrado' && B == 'inseto' && C == 'hematofago')
    {
        printf("pulga\n");
    }
    else if (A == 'invertebrado' && B == 'inseto' && C == 'herbivoro')
    {
        printf("lagarta\n");
    }
    else if (A == 'invertebrado' && B == 'anelideo' && C == 'hematofago')
    {
        printf("sanguessuga\n");
    }
    else if (A == 'invertebrado' && B == 'anelideo' && C == 'onivoro')
    {
        printf("minhoca\n");
    }
    
    return 0;
}