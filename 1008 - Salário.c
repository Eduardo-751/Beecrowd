#include <stdio.h>

int main(){

    int A, B;
    double C, Salario;
    scanf("%i %i", &A, &B);
    scanf("%lf", &C);
    Salario = B*C;
    printf("NUMBER = %i\n", A);
    printf("SALARY = U$ %.2lf\n", Salario);

    return 0;
}
