#include <stdio.h>
#include <math.h>

int main(){

    double r, total, r3;
    scanf("%lf", &r);
    r3 = pow(r, 3);
    total = (4.0/3.0)*3.14159*r3;
    printf("VOLUME = %.3lf\n", total);

    return 0;
}
