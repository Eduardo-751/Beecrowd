1101 - Sequência de Números e Soma
==================================

Leia um conjunto não determinado de pares de valores _**M**_ e _**N**_ (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o _**N**_ e _**M**_).

Entrada
-------

O arquivo de entrada contém um número não determinado de valores _**M**_ e **_N_**. A última linha de entrada vai conter um número nulo ou negativo.

Saída
-----

Para cada dupla de valores, imprima a sequência do menor até o maior e a soma deles, conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 5 2 <br/> 6 3 <br/> 5 0 | 2 3 4 5 Sum=14 <br/> 3 4 5 6 Sum=18 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int M, N, Sum=0, aux;
	while(scanf("%d %d", &M,&N)!=0) {
		if(M<=0 || N<=0)
			break;

		if(N<M) {
			aux = N;
			N = M;
			M = aux;
		}
		for(M; M<=N; M++) {
			printf("%i ", M);
			Sum+=M;
		}
		printf("Sum=%i\n", Sum);
		Sum=0;
	}
	return 0;
}
```
