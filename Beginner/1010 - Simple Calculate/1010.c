#include <stdio.h>

int main(){

    int A, B, C, D;
    double E, F, total;
    scanf("%i %i %lf", &A, &B, &E);
    scanf("%i %i %lf", &C, &D, &F);
    total = (B*E)+(D*F);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}