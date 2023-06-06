#include <stdio.h>
 
int main() {
 
    int i;
    double N;

    scanf("%lf", &N);
    for(i=0; i<100; i++) {
        printf("N[%d] = %.4lf\n", i, N);
        N/=2;
    }
    return 0;
}