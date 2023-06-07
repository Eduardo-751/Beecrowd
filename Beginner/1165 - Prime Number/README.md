1165 - Número Primo
===================

Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.

Entrada
-------

A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro **N** (1 ≤ **N** ≤ 100), indicando o número de casos de teste da entrada. Cada uma das **N** linhas seguintes contém um valor inteiro **X** (1 < **X** ≤ 107), que pode ser ou não, um número primo.

Saída
-----

Para cada caso de teste de entrada, imprima a mensagem “**X** eh primo” ou “**X** nao eh primo”, de acordo com a especificação fornecida.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 3 <br/> 8 <br/> 51 <br/> 7 | 8 nao eh primo <br/> 51 nao eh primo <br/> 7 eh primo |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int N, X, Sum;
    int i, i2;
    scanf("%i", &N);
    for(i=0; i<N; i++) {
        Sum=0;
        scanf("%i", &X);
        for(i2=1; i2<=X; i2++) {
            if(X%i2==0)
                Sum++;
        }
        if(Sum==2)
            printf("%i eh primo\n", X);
        else
            printf("%i nao eh primo\n", X);
    }
    return 0;
}
```
