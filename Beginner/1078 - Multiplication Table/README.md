1078 - Tabuada
==============

Leia 1 valor inteiro N (2 < N < 1000). A seguir, mostre a tabuada de N:        
1 x N = N      2 x N = 2N        ...       10 x N = 10N

Entrada
-------

A entrada contém um valor inteiro **N** (2 < **N** < 1000).

Saída
-----

Imprima a tabuada de N, conforme o exemplo fornecido.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 140 | 1 x 140 = 140 <br/> 2 x 140 = 280 <br/> 3 x 140 = 420 <br/> 4 x 140 = 560 <br/> 5 x 140 = 700 <br/> 6 x 140 = 840 <br/> 7 x 140 = 980 <br/> 8 x 140 = 1120 <br/> 9 x 140 = 1260 <br/> 10 x 140 = 1400 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int N, i;
	scanf("%i", &N);

	for(i=1; i<=10; i++)
	{
	   	printf("%i x %i = %i\n", i, N, N*i);
	}

	return 0;
}
```
