#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
    }
    printf("%i valores pares\n", a);
    return 0;
}