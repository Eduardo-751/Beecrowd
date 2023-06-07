1156 - Sequência S II
=====================

Escreva um algoritmo para calcular e escrever o valor de S, sendo S dado pela fórmula:  
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

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

    float Sum=0, i, i2=1;
    for(i=1; i<=39; i+=2){
        Sum+=i/i2;
        i2*=2;
    }
    printf("%.2f\n", Sum);
    return 0;
}
```
