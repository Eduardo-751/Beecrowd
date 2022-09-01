/*
Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, 
calculate the perimeter of the triangle and print the message:

Perimetro = XX.X

If it is not possible, calculate the area of the trapezium which basis A and B and C as height, and print the message:

Area = XX.X

Input
The input file has tree floating point numbers.

Output
Print the result with one digit after the decimal point.

Input Sample	Output Sample
6.0 4.0 2.0     Area = 10.0

6.0 4.0 2.1     Perimetro = 12.1
*/
#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);
    if(A<B+C && B<A+C && C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);

    else
        printf("Area = %.1lf\n",((A+B)*C)/2);

    return 0;
}