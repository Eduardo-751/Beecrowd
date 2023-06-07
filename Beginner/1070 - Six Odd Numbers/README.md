1070 - Seis Números Ímpares
===========================

Leia um valor inteiro **X**. Em seguida apresente os 6 valores ímpares consecutivos a partir de **X**, um valor por linha, inclusive o **X** ser for o caso.

Entrada
-------

A entrada será um valor inteiro positivo.

Saída
-----

A saída será uma sequência de seis números ímpares.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 8                   | 9 <br/> 11 <br/> 13 <br/> 15 <br/> 17 <br/> 19 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int a, i;

    scanf("%i", &a);
    for(i=a; i<=a+11; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }

    return 0;
}
```
