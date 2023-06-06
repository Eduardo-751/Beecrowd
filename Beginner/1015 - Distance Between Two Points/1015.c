#include <stdio.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2, distancia, m1, m2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    m1 = pow((x2-x1), 2);
    m2 = pow((y2-y1), 2);
    distancia = sqrt(m1 + m2);
    printf("%.4lf\n", distancia);
    return 0;
}