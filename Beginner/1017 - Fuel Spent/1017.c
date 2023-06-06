#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    double x;
    scanf("%i %i", &a, &b);
    x = (a*b)/12.0;
    printf("%.3lf\n", x);
    return 0;
}