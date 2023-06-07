1095 - Sequencia IJ 1
=====================

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
-------

Não há nenhuma entrada neste problema.

Saída
-----

Imprima a sequencia conforme exemplo abaixo

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
|                     | I=1 J=60 <br/> I=4 J=55 <br/> I=7 J=50 <br/> ... <br/> I=? J=0 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(void) {

    int i, j=60;

    for(i=1;i<40;i+=3){
        printf("I=%i J=%i\n",i,j);
        j-=5;
    }

    return 0;
}
```
