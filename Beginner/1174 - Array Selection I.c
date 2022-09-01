/*
In this problem, your task is to read an array A[100]. At the end, print all array positions that store a 
number less or equal to 10 and the number stored in that position.

Input
The input contains 100 numbers. Each number can be integer, floating-point number, positive or negative.

Output
For each number of the array that is equal to 10 or less, print "A [i] = x", 
where i is the position of the array and x is the number stored in the position, with one digit after the decimal point.

Input Sample	Output Sample
0               A[0] = 0.0
-5              A[1] = -5.0
63              
-8.5            A[3] = -8.5
...             ...
*/
#include <stdio.h>
 
int main() {

    double N[100];
    int i;
    for(i=0; i<100; i++)
        scanf("%lf", &N[i]);
    for(i=0; i<100; i++)
        if(N[i] <= 10)
            printf("A[%d] = %.1lf\n", i, N[i]);
    return 0;
}