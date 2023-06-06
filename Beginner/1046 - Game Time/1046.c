#include <stdio.h>
#include <math.h>

int main(){

    int A, B;
    scanf("%i %i", &A, &B);
    if(A>=B)
        B+=24;

    printf("O JOGO DUROU %i HORA(S)\n", B-A);

    return 0;
}