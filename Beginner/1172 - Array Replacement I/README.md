1172 - Substituição em Vetor I
==============================

Faça um programa que leia um vetor X\[10\]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.

Entrada
-------

A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.

Saída
-----

Para cada posição do vetor, escreva "X\[**i**\] = **x**", onde **i** é a posição do vetor e **x** é o valor armazenado naquela posição.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 0 <br/> -5 <br/> 63 <br/> 0 <br/> ... | X[0] = 1 <br/> X[1] = 1 <br/> X[2] = 63 <br/> X[3] = 1 <br/> ... |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int X[10];
    int i;
    for(i=0; i<10; i++) {
        scanf("%i", &X[i]);
    }
    for(i=0; i<10; i++) {
        if(X[i]<=0)
            X[i]=1;
    }
    for(i=0; i<10; i++) {
        printf("X[%i] = %i\n", i, X[i]);
    }
    return 0;
}
```
