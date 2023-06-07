1133 - Resto da Divisão
=======================

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.

Entrada
-------

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.

Saída
-----

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 10 <br/> 18         | 12 <br/> 13 <br/> 17 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int X, Y, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X+1;
	while(aux<Y) {
		if(aux%5==2 || aux%5==3)
			printf("%i\n", aux);
		aux++;
	}
	return 0;
}
```
