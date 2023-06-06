#include <stdio.h>
#include <math.h>

int main()
{

    int valor;

    scanf("%i", &valor);
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    valor %= 100;
    printf("%d nota(s) de R$ 50,00\n", valor / 50);
    valor %= 50;
    printf("%d nota(s) de R$ 20,00\n", valor / 20);
    valor %= 20;
    printf("%d nota(s) de R$ 10,00\n", valor / 10);
    valor %= 10;
    printf("%d nota(s) de R$ 5,00\n", valor / 5);
    valor %= 5;
    printf("%d nota(s) de R$ 2,00\n", valor / 2);
    valor %= 2;
    printf("%d nota(s) de R$ 1,00\n", valor);

    return 0;
}