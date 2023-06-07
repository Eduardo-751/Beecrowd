1174 - Seleçao em Vetor I
=========================

Faça um programa que leia um vetor A\[100\]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
-------

A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
-----

Para cada valor do vetor menor ou igual a 10, escreva "A\[**i**\] = **x**", onde **i** é a posição do vetor e **x** é o valor armazenado na posição, com uma casa após o ponto decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 0 <br/> -5 <br/> 63 <br/> -8.5 <br/> ... | A[0] = 0.0 <br/> A[1] = -5.0 <br/> A[3] = -8.5 <br/> ... |

&nbsp;

### C99

```c
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
```
