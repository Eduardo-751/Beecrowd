#include <stdio.h>

int main()
{
    char nome[15];
    double A, B, salario;

    scanf("%s", nome);
    scanf("%lf %lf", &A, &B);

    salario = A + (B * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}