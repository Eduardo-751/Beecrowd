1155 - Sequência S
==================

Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:  
S = 1 + 1/2 + 1/3 + … + 1/100

Entrada
-------

Não há nenhuma entrada neste problema.

Saída
-----

A saída contém um valor correspondente ao valor de S.  
O valor deve ser impresso com dois dígitos após o ponto decimal.

&nbsp;

### C99

```c
#include <stdio.h>

int main() {
    float Sum=0, i;
    for(i=1; i<=100; i++){
        Sum+=1/i;
    }
    printf("%.2f\n", Sum);
    return 0;
}
```
