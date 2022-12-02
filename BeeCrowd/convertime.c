#include <stdio.h>

int main()
{
    int S;

    scanf("%d", &S);

    int hora;
    hora = S / 3600;
    int restoH;
    restoH = S - (hora * 3600);
    
    int min;
    min = restoH / 60;
    int restoM;
    restoM = restoH - (min * 60);

    printf("%d:%d:%d\n", hora, min, restoM);

    return 0;

}