#include <stdio.h>
#include <math.h>


int main(){

    double A, B, C;
    double x1, x2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4*A*C);
    x1 = (-B + sqrt(delta))/(2*A);
    x2 = (-B - sqrt(delta))/(2*A);

    if(A>0 &&   delta>0){
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}