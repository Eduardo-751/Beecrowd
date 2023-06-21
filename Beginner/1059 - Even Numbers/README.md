# 1059 - Números Pares

Faça um programa que mostre os números pares entre 1 e 100, inclusive.

## Entrada

Neste problema extremamente simples de repetição não há entrada.

## Saída

Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                     |
| ------------------- | ------------------------------------- |
|                     | 2 <br/> 4 <br/> 6 <br/> ... <br/> 100 |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int i;

    for(i=2; i<=100; i+=2)
        printf("%i\n", i);

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
        for(inti=2; i<=100; i+=2)
            Console.WriteLine($"{i}");
    }
}
```
