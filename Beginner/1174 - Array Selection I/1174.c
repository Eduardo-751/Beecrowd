#include <stdio.h>
 
int main() {

    double N[100];
    int i;
    for(i=0; i<100; i++)
        scanf("%lf", &N[i]);
    for(i=0; i<100; i++)
        if(N[i] <= 10)
            printf("A[%d] = %.1lf\n", i, N[i]);
    return 0;
}