/*
Write an algorithm that reads two floating values (x and y), which should represent the coordinates of a point in a plane. 
Next, determine which quadrant the point belongs, or if you are at one of the Cartesian axes or the origin (x = y = 0).

https://www.beecrowd.com.br/judge/en/problems/view/1041

If the point is at the origin, write the message "Origem".

If the point is at X axis write "Eixo X", else if the point is at Y axis write "Eixo Y".

Input
The input contains the coordinates of a point.

Output
The output should display the quadrant in which the point is.

Input Sample	Output Sample
4.5 -2.2        Q4

0.1 0.1         Q1

0.0 0.0         Origem
*/
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