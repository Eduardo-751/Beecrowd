# 1074 - Par ou Ímpar

Leia um valor inteiro **N**. Este valor será a quantidade de valores que serão lidos em seguida. Para cada valor lido, mostre uma mensagem em inglês dizendo se este valor lido é par (_EVEN_), ímpar (_ODD_), positivo (_POSITIVE_) ou negativo (_NEGATIVE_). No caso do valor ser igual a zero (0), embora a descrição correta seja (_EVEN NULL_), pois por definição zero é par, seu programa deverá imprimir apenas _NULL_.

## Entrada

A primeira linha da entrada contém um valor inteiro **N**(**N** < 10000) que indica o número de casos de teste. Cada caso de teste a seguir é um valor inteiro **X** (-107 < **X** <107).

## Saída

Para cada caso, imprima uma mensagem correspondente, de acordo com o exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre deverá haver um espaço **entre** duas palavras impressas na mesma linha.

&nbsp;

| Exemplos de Entrada                 | Exemplos de Saída                                              |
| ----------------------------------- | -------------------------------------------------------------- |
| 4 <br/> -5 <br/> 0 <br/> 3 <br/> -4 | ODD NEGATIVE <br/> NULL <br/> ODD NEGATIVE EVEN <br/> NEGATIVE |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int testes, aux, i;

	scanf("%i", &testes);

	for(i=0; i<testes; i++)
	{
		scanf("%i", &aux);

		if(aux%2==0 && aux!=0)
			printf("EVEN ");
		else if((aux%2==1 || aux%2==-1) && aux!=0)
			printf("ODD ");

		if(aux>0)
			printf("POSITIVE\n");
		else if(aux<0)
			printf("NEGATIVE\n");
		else
			printf("NULL\n");
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
            int X = int.Parse(Console.ReadLine());
            if (X == 0)
                Console.WriteLine("NULL");
            else
            {
                string evenOrOdd = X % 2 == 0 ? "EVEN" : "ODD";
                string positiveOrNegative = X > 0 ? "POSITIVE" : "NEGATIVE";
                Console.WriteLine($"{evenOrOdd} {positiveOrNegative}");
            }
        }
    }
}
```
