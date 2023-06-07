1146 - Somando Inteiros Consecutivos
====================================

Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for negativo ou ZERO, um novo N(apenas N) deve ser lido.

Entrada
-------

A entrada contém somente valores inteiros, podendo ser positivos ou negativos. Todos os valores estão na mesma linha.

Saída
-----

A saída contém apenas um valor inteiro.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 3 2                 | 7                    |

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 3 -1 0 -2 2         | 7                    |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int A, N, i, Soma=0;
	scanf("%i", &A);
	do {
		scanf("%i", &N);
	}while(N<=0);

	for(i=0; i<N; i++) {
		Soma += (A+i);
	}
	printf("%i\n", Soma);
	return 0;
}
```
