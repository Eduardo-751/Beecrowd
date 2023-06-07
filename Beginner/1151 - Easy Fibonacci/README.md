1151 - Fibonacci Fácil
======================

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
-------

O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
-----

Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver espaço após o último valor.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 5                   | 0 1 1 2 3            |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int N, i, F, f1=0, f2=1;
	scanf("%i", &N);
	for(i=0; i<N; i++) {
		if(i<2)
			F=i;
		else{
			F = f1+f2;
			f1=f2;
			f2=F;
		}
		printf("%i", F);
		if(i!=N-1)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}
```
