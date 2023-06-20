#include <stdio.h>
#include <math.h>

int main(){

    int A, B;

    scanf("%i %i", &A, &B);
    if(A%B==0 || B%A==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

    return 0;
}