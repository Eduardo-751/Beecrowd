/*
Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).

Input
The input file contains 4 integer values.

Output
Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

Input Samples	Output Samples
5               DIFERENCA = -26
6
7
8

0               DIFERENCA = -56
0
7
8

5               DIFERENCA = 86
6
-7
8
*/
#include <stdio.h>

int main(){

    int A, B, C, D, DIFERENCA;

    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);

    return 0;
}
