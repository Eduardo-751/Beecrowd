#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (A*C)/2, (C*C)*3.14159, ((A+B)*C)/2, B*B, A*B);

    return 0;
}