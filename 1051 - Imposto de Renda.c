#include <stdio.h>
#include <math.h>

int main(){

    double salario, imposto=0;

    scanf("%lf", &salario);

    if(salario > 4500){
        imposto = imposto + (salario-4500)*0.28;
        imposto = imposto + (1500*0.18);
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000){
        imposto = imposto + (salario-3000)*0.18;
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 2000){
        imposto = imposto + (salario-2000)*0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else
        printf("Isento\n");

    return 0;
}