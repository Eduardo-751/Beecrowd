#include <stdio.h>
#include <math.h>

int main()
{

    int A, B;
    float valor;

    scanf("%i %i", &A, &B);
    switch (A)
    {
    case 1:
        valor = B * 4.0;
        break;
    case 2:
        valor = B * 4.5;
        break;
    case 3:
        valor = B * 5.0;
        break;
    case 4:
        valor = B * 2.0;
        break;
    case 5:
        valor = B * 1.5;
        break;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}