1164 - Número Perfeito
======================

Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito, pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.

Entrada
-------

A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro **N** (1 ≤ **N** ≤ 20), indicando o número de casos de teste da entrada. Cada uma das **N** linhas seguintes contém um valor inteiro **X** (1 ≤ **X** ≤ 108), que pode ser ou não, um número perfeito.

Saída
-----

Para cada caso de teste de entrada, imprima a mensagem “**X** eh perfeito” ou “**X** nao eh perfeito”, de acordo com a especificação fornecida.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 3 <br/> 6 <br/> 5 <br/> 28 | 6 eh perfeito <br/> 5 nao eh perfeito <br/> 28 eh perfeito |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    int N, X, Sum;
    int i, i2;

    scanf("%i", &N);
    for (i = 0; i < N; i++)
    {
        Sum = 0;
        scanf("%i", &X);
        for (i2 = 1; i2 < X; i2++)
        {
            if (X % i2 == 0)
                Sum += i2;
        }
        if (Sum == X)
            printf("%i eh perfeito\n", X);
        else
            printf("%i nao eh perfeito\n", X);
    }
    return 0;
}
```
