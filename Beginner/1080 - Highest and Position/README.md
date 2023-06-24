# 1080 - Maior e Posição

Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.

## Entrada

O arquivo de entrada contém 100 números inteiros, positivos e distintos.

## Saída

Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada                                       | Exemplos de Saída |
| --------------------------------------------------------- | ----------------- |
| 2 <br/> 113 <br/> 45 <br/> 34565 <br/> 6 <br/> ...<br/> 8 | 34565 <br/> 4     |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int Maior=0, pos, i, aux;

	for(i=1; i<=100; i++)
	{
	   	scanf("%i", &aux);
	   	if(aux>Maior){
	   		Maior = aux;
			pos = i;
		}
	}

	printf("%i\n", Maior);
	printf("%i\n", pos);

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
        int Maior = 0, position = 0;
        for (int i = 1; i <= 100; i++)
        {
            int N = int.Parse(Console.ReadLine());
            if (N > Maior)
            {
                Maior = N;
                position = i;
            }
        }
        Console.WriteLine(Maior);
        Console.WriteLine(position);
    }
}
```
