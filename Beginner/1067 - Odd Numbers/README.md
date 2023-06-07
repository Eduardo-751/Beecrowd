1067 - Números Ímpares
======================

Leia um valor inteiro **X** (1 <= **X** <= 1000). Em seguida mostre os ímpares de 1 até **X**, um valor por linha, inclusive o **X**, se for o caso.

Entrada
-------

O arquivo de entrada contém 1 valor inteiro qualquer.

Saída
-----

Imprima todos os valores ímpares de 1 até **X**, inclusive **X**, se for o caso.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 8                   | 1 <br/> 3 <br/> 5 <br/> 7 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int a, i;
    scanf("%i", &a);

    for(i=1; i<=a; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }

    return 0;
}
```
