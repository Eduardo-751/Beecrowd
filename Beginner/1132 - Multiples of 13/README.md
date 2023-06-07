1132 - Múltiplos de 13
======================

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.

Entrada
-------

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.

Saída
-----

Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 100 <br/> 200       | 13954             |

&nbsp;

### C99

```c
#include<stdio.h>

int main() {

	int X, Y, Soma=0, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X;
	while(aux<=Y){
		if(aux%13 != 0)
			Soma+=aux;
		aux++;
	}
	printf("%i\n", Soma);
	return 0;
}
```
