1177 - Preenchimento de Vetor II
================================

Faça um programa que leia um valor **T** e preencha um vetor **N**\[1000\] com a sequência de valores de 0 até **T**\-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor **N**.

Entrada
-------

A entrada contém um valor inteiro **T** (2 ≤ **T** ≤ 50).

Saída
-----

Para cada posição do vetor, escreva "**N**\[_i_\] = **x**", onde _i_ é a posição do vetor e **x** é o valor armazenado naquela posição.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 3                   | N\[0\] = 0 <br/> N\[1\] = 1 <br/> N\[2\] = 2 <br/> N\[3\] = 0 <br/> N\[4\] = 1 <br/> N\[5\] = 2 <br/> N\[6\] = 0 <br/> N\[7\] = 1 <br/> N\[8\] = 2 <br/> ... |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    int N, i;
    scanf("%d", &N);
    for(i=0; i<1000; i++) {
        printf("N[%d] = %d\n", i, i % N);
    }
    return 0;
}
```
