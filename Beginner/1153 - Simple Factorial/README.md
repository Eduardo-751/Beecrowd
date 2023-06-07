1153 - Fatorial Simples
=======================

Ler um valor N. Calcular e escrever seu respectivo fatorial. Fatorial de N = N \* (N-1) \* (N-2) \* (N-3) \* ... \* 1.

Entrada
-------

A entrada contém um valor inteiro N (0 < N < 13).

Saída
-----

A saída contém um valor inteiro, correspondente ao fatorial de N.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 4                   | 24                   |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int N, i;
	scanf("%i", &N);
	for(i=N-1; i>0; i--) {
		N = N*i;
	}
	printf("%i\n", N);
	return 0;
}
```
