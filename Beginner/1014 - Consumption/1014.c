#include <stdio.h>
#include <math.h>

int main(){

    int x;
    double y;
    scanf("%i %lf", &x, &y);
    printf("%.3lf km/l\n", x/y);
    return 0;
}