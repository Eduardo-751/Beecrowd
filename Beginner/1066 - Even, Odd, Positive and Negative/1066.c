#include <stdio.h>
#include <math.h>

int main(){

    int i, a=0, b=0, c=0, d=0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
        else
            b++;
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            d++;
    }
    printf("%i valor(es) par(es)\n", a);
    printf("%i valor(es) impar(es)\n", b);
    printf("%i valor(es) positivo(s)\n", c);
    printf("%i valor(es) negativo(s)\n", d);
    return 0;
}