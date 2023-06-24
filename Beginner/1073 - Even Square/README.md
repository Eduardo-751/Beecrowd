# 1073 - Quadrado de Pares

Leia um valor inteiro **N**. Apresente o quadrado de cada um dos valores pares, de 1 até **N**, inclusive **N**, se for o caso.

## Entrada

A entrada contém um valor inteiro **N** (5 < **N** < 2000).

## Saída

Imprima o quadrado de cada um dos valores pares, de 1 até **N**, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                     |
| ------------------- | ------------------------------------- |
| 6                   | 2^2 = 4 <br/> 4^2 = 16 <br/> 6^2 = 36 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int max, i;

	scanf("%i", &max);

	for(i=2; i<=max; i++){
		if(i%2 == 0)
			printf("%i^2 = %i\n", i, i*i);
	}

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
        int max = int.Parse(Console.ReadLine());

        for (int i = 2; i <= max; i += 2)
        {
            Console.WriteLine($"{i}^2 = {i * i}");
        }
    }
}
```
