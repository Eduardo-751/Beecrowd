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