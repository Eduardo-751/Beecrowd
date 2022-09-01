/*
Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

Input Sample	Output Sample
7               4 valores positivos
-5
6
-3.4
4.6
12
*/
#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    double A[6];

    for(i=0; i<6; i++){
        scanf("%lf", &A[i]);
        if(A[i]>0)
            a++;
    }
    printf("%i valores positivos\n", a);
    return 0;
}