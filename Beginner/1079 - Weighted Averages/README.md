# 1079 - Médias Ponderadas

Leia 1 valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de teste consiste de 3 valores reais, cada um deles com uma casa decimal. Apresente a média ponderada para cada um destes conjuntos de 3 valores, sendo que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5.

## Entrada

O arquivo de entrada contém um valor inteiro **N** na primeira linha. Cada **N** linha a seguir contém um caso de teste com três valores com uma casa decimal cada valor.

## Saída

Para cada caso de teste, imprima a média ponderada dos 3 valores, conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada                                      | Exemplos de Saída       |
| -------------------------------------------------------- | ----------------------- |
| 3 <br/> 6.5 4.3 6.2 <br/> 5.1 4.2 8.1 <br/> 8.0 9.0 10.0 | 5.7 <br/> 6.3 <br/> 9.3 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int N, i;
	double n1, n2, n3, media;

	scanf("%i", &N);

	for(i=1; i<=N; i++)
	{
	   	scanf("%lf %lf %lf", &n1, &n2, &n3);
	   	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	   	printf("%.1lf\n", media);
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
        int N = int.Parse(Console.ReadLine());
        for (int i = 0; i < N; i++)
        {
            string[] input = Console.ReadLine().Split(' ');

            double ac1 = double.Parse(input[0]);
            double ac2 = double.Parse(input[1]);
            double af = double.Parse(input[2]);

            Console.WriteLine($"{ac1 * 0.2 + ac2 * 0.3 + af * 0.5:0.0}");
        }
    }
}
```
