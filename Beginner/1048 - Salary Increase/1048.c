#include <stdio.h>

int main()
{

    double salario;
    int aux;

    scanf("%lf", &salario);

    if (salario <= 400.00)
        aux = 15;
    else if (salario <= 800.00)
        aux = 12;
    else if (salario <= 1200.00)
        aux = 10;
    else if (salario <= 2000.00)
        aux = 7;
    else
        aux = 4;

    printf("Novo salario: %.2lf\n", salario * (1 + aux / 100.00));
    printf("Reajuste ganho: %.2lf\n", salario * aux / 100.00);
    printf("Em percentual: %d \%\n", aux);

    return 0;
}