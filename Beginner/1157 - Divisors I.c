/*
Read an integer N and compute all its divisors.

Input
The input file contains an integer value.

Output
Write all positive divisors of N, one value per line.

Input Sample	Output Sample
6               1
                2
                3
                6
*/
#include <stdio.h>

int main(){

    int N, i;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        if(N%i == 0)
            printf("%i\n", i);
    }
    return 0;
}