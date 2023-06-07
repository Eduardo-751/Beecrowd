1098 - Sequencia IJ 4
=====================

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
-------

Não há nenhuma entrada neste problema.

Saída
-----

Imprima a sequencia conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
|                     | I=0 J=1 <br/> I=0 J=2 <br/> I=0 J=3 <br/> I=0.2 J=1.2 <br/> I=0.2 J=2.2 <br/> I=0.2 J=3.2 <br/> ...<br/> I=2 J=? <br/> I=2 J=? <br/> I=2 J=? |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>
int main() {
    float i, j;
    for(i=0; i<2.1; i=i+0.2) {
        j=i+1;
        if(i==0 || i==1 || i>1.9) {
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}
```
