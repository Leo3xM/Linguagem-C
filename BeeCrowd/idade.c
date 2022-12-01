#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);

    int ano;
    ano = X / 365;
    int restoA;
    restoA = X - (ano * 365);

    int mes;
    mes = restoA / 30;
    int restoM;
    restoM = restoA - (mes * 30);

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", restoM);

    return 0;
}