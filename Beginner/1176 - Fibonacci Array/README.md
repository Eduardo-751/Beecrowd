1176 - Fibonacci em Vetor
=========================

Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
-------

A primeira linha da entrada contém um inteiro **T**, indicando o número de casos de teste. Cada caso de teste contém um único inteiro **N** (0 ≤ **N** ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.

Saída
-----

Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 3 <br/> 0 <br/> 4 <br/> 2 | Fib(0) = 0 <br/> Fib(4) = 3 <br/> Fib(2) = 1 |

&nbsp;

### C99

```c
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
```
