1017 - Gasto de Combustível
===========================

Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.

Entrada
-------

O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).

Saída
-----

Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 10 <br/> 85              | 70.833                   |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 2 <br/> 92               | 15.333                   |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 22 <br/> 67              | 122.833                  |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    double x;
    scanf("%i %i", &a, &b);
    x = (a*b)/12.0;
    printf("%.3lf\n", x);
    return 0;
}
```
