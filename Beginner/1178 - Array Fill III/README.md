1178 - Preenchimento de Vetor III
=================================

Leia um valor **X**. Coloque este valor na primeira posição de um vetor **N**\[100\]. Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor **N**.

Entrada
-------

A entrada contem um valor de dupla precisão com 4 casas decimais.

Saída
-----

Para cada posição do vetor **N**, escreva "N\[_i_\] = Y", onde _i_ é a posição do vetor e **Y** é o valor armazenado naquela posição. Cada valor do vetor deve ser apresentado com 4 casas decimais.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 200.0000            | N\[0\] = 200.0000 <br/> N\[1\] = 100.0000 <br/> N\[2\] = 50.0000 <br/> N\[3\] = 25.0000 <br/> N\[4\] = 12.5000 <br/> ... |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    int i;
    double N;

    scanf("%lf", &N);
    for(i=0; i<100; i++) {
        printf("N[%d] = %.4lf\n", i, N);
        N/=2;
    }
    return 0;
}
```
