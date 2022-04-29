#include <stdio.h>
#include <math.h>

int main(){

    double X1, Y1;

    scanf("%lf %lf",&X1, &Y1);

    if(X1==0 && Y1==0)
        printf("Origem\n");
    else if(X1==0)
        printf("Eixo Y\n");
    else if(Y1==0)
        printf("Eixo X\n");
    else if(X1>0 && Y1>0)
        printf("Q1\n");
    else if(X1<0 && Y1<0)
        printf("Q3\n");
    else if(X1>0 && Y1<0)
        printf("Q4\n");
    else if(X1<0 && Y1>0)
        printf("Q2\n");
    return 0;
}