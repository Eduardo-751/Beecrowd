/*
Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:

MaiorAB = (a+b+abs(a-b))/2

Input
The input file contains 3 integer values.

Output
Print the greatest of these three values followed by a space and the message “eh o maior”.

Input Samples	Output Samples
7 14 106        106 eh o maior

217 14 6        217 eh o maior
*/
#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if((a+b+abs(a-b))/2 > c)
        printf("%i eh o maior\n", (a+b+abs(a-b))/2);
    else
        printf("%i eh o maior\n", c);
    return 0;
}