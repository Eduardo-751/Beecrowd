1014 - Consumo
==============

Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

Entrada
-------

O arquivo de entrada contém dois valores: um valor inteiro **X** representando a distância total percorrida (em Km), e um valor real **Y** representando o total de combustível gasto, com um dígito após o ponto decimal.

Saída
-----

Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 500 <br/> 35.0           | 14.286 km/l              |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 2254 <br/> 124.4         | 18.119 km/l              |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 4554 <br/> 464.6         | 9.802 km/l               |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int x;
    double y;
    scanf("%i %lf", &x, &y);
    printf("%.3lf km/l\n", x/y);
    return 0;
}
```

### C#

```cs
using System;

class URI
{
    static void Main(string[] args)
    {
        int X = int.Parse(Console.ReadLine());
        double Y = double.Parse(Console.ReadLine());

        double C = X/Y;
        Console.WriteLine($"{C:0.000} km/l");
    }
}
```
