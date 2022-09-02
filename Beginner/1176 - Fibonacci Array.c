/*
Write a program that reads a number and print the Fibonacci number corresponding to this read number. 
Remember that the first elements of the Fibonacci series are 0 and 1 and each next term is the sum of the two preceding it. 
All the Fibonacci numbers calculated in this program must fit in a unsigned 64 bits number.

Input
The first line of the input contains a single integer T, indicating the number of test cases. Each test case contains a single integer N (0 ≤ N ≤ 60), 
corresponding to the N-th term of the Fibonacci series.

Output
For each test case in the input, print the message "Fib(N) = X", where X is the N-th term of the Fibonacci series.

Input Sample	Output Sample
3
0               Fib(0) = 0
4               Fib(4) = 3
2               Fib(2) = 1
*/
#include <stdio.h>
 
long long F[61];

long long Fibonacci(int n){
    if(F[n] == -1){
        F[n] = Fibonacci(n - 2) + Fibonacci(n - 1);
    }
    return F[n];
}

int main() {
 
    int i, T, N;

    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 61; ++i)
            F[i] = -1;

    scanf("%i", &T);
    for (i = 0; i < T; i++) {
        scanf("%i", &N);
        printf("Fib(%d) = %lld\n", N, Fibonacci(N));
    }
    return 0;
}