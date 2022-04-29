#include <stdio.h>
#include <math.h>


int main(){

    int A, B;
    float valor;

    scanf("%i %i", &A, &B);

    if(A==1){
        valor = B * 4.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==2){
        valor = B * 4.5;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==3){
        valor = B * 5.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==4){
        valor = B * 2.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else{
        valor = B * 1.5;
        printf("Total: R$ %.2lf\n", valor);
    }

    return 0;
}