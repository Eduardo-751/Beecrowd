1018 - Cédulas
==============

Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre **o valor lido** e a relação de notas necessárias.

Entrada
-------

O arquivo de entrada contém um valor inteiro **N** (0 < **N** < 1000000).

Saída
-----

Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: _“Presentation Error”_.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 576 <br/> 85             | 576 <br/> 5 nota(s) de R$ 100,00 <br/> 1 nota(s) de R$ 50,00 <br/> 1 nota(s) de R$ 20,00 <br/> 0 nota(s) de R$ 10,00 <br/> 1 nota(s) de R$ 5,00 <br/> 0 nota(s) de R$ 2,00 <br/> 1 nota(s) de R$ 1,00 |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 11257 <br/> 92           | 11257 <br/> 112 nota(s) de R$ 100,00 <br/> 1 nota(s) de R$ 50,00 <br/> 0 nota(s) de R$ 20,00 <br/> 0 nota(s) de R$ 10,00 <br/> 1 nota(s) de R$ 5,00 <br/> 1 nota(s) de R$ 2,00 <br/> 0 nota(s) de R$ 1,00 |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|---------------------------|
| 503                      | 503 <br/> 5 nota(s) de R$ 100,00 <br/> 0 nota(s) de R$ 50,00 <br/> 0 nota(s) de R$ 20,00 <br/> 0 nota(s) de R$ 10,00 <br/> 0 nota(s) de R$ 5,00 <br/> 1 nota(s) de R$ 2,00 <br/> 1 nota(s) de R$ 1,00 |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main()
{

    int valor;

    scanf("%i", &valor);
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    valor %= 100;
    printf("%d nota(s) de R$ 50,00\n", valor / 50);
    valor %= 50;
    printf("%d nota(s) de R$ 20,00\n", valor / 20);
    valor %= 20;
    printf("%d nota(s) de R$ 10,00\n", valor / 10);
    valor %= 10;
    printf("%d nota(s) de R$ 5,00\n", valor / 5);
    valor %= 5;
    printf("%d nota(s) de R$ 2,00\n", valor / 2);
    valor %= 2;
    printf("%d nota(s) de R$ 1,00\n", valor);

    return 0;
}
```
