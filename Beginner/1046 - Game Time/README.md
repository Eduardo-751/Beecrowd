1046 - Tempo de Jogo
====================

Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
-------

A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
-----

Apresente a duração do jogo conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída       |
|---------------------|-------------------------|
| 16 2                | O JOGO DUROU 10 HORA(S) |

| Exemplos de Entrada | Exemplos de Saída       |
|---------------------|-------------------------|
| 0 0                 | O JOGO DUROU 24 HORA(S) |

| Exemplos de Entrada | Exemplos de Saída       |
|---------------------|-------------------------|
| 2 16                | O JOGO DUROU 14 HORA(S) |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int A, B;
    scanf("%i %i", &A, &B);
    if(A>=B)
        B+=24;

    printf("O JOGO DUROU %i HORA(S)\n", B-A);

    return 0;
}
```
