#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    double A[6];

    for(i=0; i<6; i++){
        scanf("%lf", &A[i]);
        if(A[i]>0)
            a++;
    }
    printf("%i valores positivos\n", a);
    return 0;
}