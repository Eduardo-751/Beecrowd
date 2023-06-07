1020 - Idade em Dias
====================

Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
-------

O arquivo de entrada contém um valor inteiro.

Saída
-----

Imprima a saída conforme exemplo fornecido.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída              |
|--------------------------|--------------------------------|
| 400                      | 1 ano(s)  1 mes(es)  5 dia(s)  |

| Exemplos de Entrada      | Exemplos de Saída              |
|--------------------------|--------------------------------|
| 800                      | 2 ano(s)  2 mes(es)  10 dia(s) |

| Exemplos de Entrada      | Exemplos de Saída              |
|--------------------------|--------------------------------|
| 30                       | 0 ano(s)  1 mes(es)  0 dia(s)  |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main()
{

    int dias, anos, meses;

    scanf("%i", &dias);

    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}
```
