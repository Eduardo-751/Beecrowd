1175 - Troca em Vetor I
=======================

Faça um programa que leia um vetor **N**\[20\]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
-------

A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
-----

Para cada posição do vetor **N**, escreva "N\[_i_\] = Y", onde _i_ é a posição do vetor e **Y** é o valor armazenado naquela posição.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 0 <br/> -5 <br/> ... <br/> 63 <br/> 230 | N[0] = 230 <br/> N[1] = 63 <br/> ... <br/>  N[18] = -5 <br/> N[19] = 0 |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    int N[20], aux[20], i;
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 20; i++) {
        aux[19 - i] = N[i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, aux[i]);
    }
    return 0;
}
```
