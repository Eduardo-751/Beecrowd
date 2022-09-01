/*
A Prime Number is a number that is divisible only by 1 (one) and by itself. For example the number 7 is Prime, because it can be divided only by 1 and by 7.

Input
The input contains several test cases. The first contains the number of test cases N (1 ≤ N ≤ 100). Each one of the following N lines 
contains an integer X (1 < X ≤ 107), that can be or not a prime number.

Output
For each test case print the message “X eh primo” (X is prime) or “X nao eh primo” (X isn't prime) according with to above specification.

Input Sample	Output Sample
3               
8               8 nao eh primo
51              51 nao eh primo
7               7 eh primo
*/
#include <stdio.h>

int main(){

    int N, X, Sum;
    int i, i2;
    scanf("%i", &N);
    for(i=0; i<N; i++) {
        Sum=0;
        scanf("%i", &X);
        for(i2=1; i2<=X; i2++) {
            if(X%i2==0)
                Sum++;
        }
        if(Sum==2)
            printf("%i eh primo\n", X);
        else
            printf("%i nao eh primo\n", X);
    }
    return 0;
}