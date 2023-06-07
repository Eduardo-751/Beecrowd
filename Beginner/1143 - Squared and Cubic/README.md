1143 - Quadrado e ao Cubo
=========================

Escreva um programa que leia um valor inteiro N (1 < N < 1000). Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
-------

O arquivo de entrada contém um número inteiro positivo N.

Saída
-----

Imprima a saída conforme o exemplo fornecido.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 5                   | 1 1 1 <br/> 2 4 8 <br/> 3 9 27 <br/> 4 16 64 <br/> 5 25 125 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N) {
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		aux++;
	}
	return 0;
}
```
