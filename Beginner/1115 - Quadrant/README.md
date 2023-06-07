1115 - Quadrante
================

Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence. O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem escrever mensagem alguma).

Entrada
-------

A entrada contém vários casos de teste. Cada caso de teste contém 2 valores inteiros.

Saída
-----

Para cada caso de teste mostre em qual quadrante do sistema cartesiano se encontra a coordenada lida, conforme o exemplo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 2 2 <br/> 3 -2 <br/> \-8 -1 <br/> \-7 1 <br/> 0 2 | primeiro <br/> quarto <br/> terceiro <br/> segundo |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int X, Y;
	scanf("%i %i", &X, &Y);
	while(X!=0 && Y!=0) {
		if(X>0)
			if(Y>0)
				printf("primeiro\n");
			else
				printf("quarto\n");
		if(X<0)
			if(Y>0)
				printf("segundo\n");
			else
				printf("terceiro\n");

		scanf("%i %i", &X, &Y);
	}
	return 0;
}
```
