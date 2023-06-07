1019 - Conversão de Tempo
=========================

Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
-------

O arquivo de entrada contém um valor inteiro **N**.

Saída
-----

Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 556                      | 0:9:16                   |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 1                        | 0:0:1                    |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 140153                   | 38:55:53                 |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main()
{

    int sec, min, hour;

    scanf("%i", &sec);

    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    printf("%i:%i:%i\n", hour, min, sec);

    return 0;
}
```

### C#

```cs
using System; 

class URI {
    static void Main(string[] args) { 

        int sec = int.Parse(Console.ReadLine());
        
        int hour = sec / 3600;
        sec %= 3600;
        int min = sec / 60;
        sec %= 60;

        Console.WriteLine($"{hour}:{min}:{sec}");
    }
}
```
