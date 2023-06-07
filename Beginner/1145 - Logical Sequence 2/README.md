1145 - Sequência Lógica 2
=========================

Escreva um programa que leia dois valores **X** e **Y**. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada **X** números.

Entrada
-------

O arquivo de entrada contém dois valores inteiros, (1 < X < 20) e (X < Y < 100000).

Saída
-----

Cada sequência deve ser impressa em uma linha apenas, com 1 espaço em branco entre cada número, conforme exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 3 99                | 1 2 3 <br/> 4 5 6 <br/> 7 8 9 <br/> 10 11 12 <br/> ... <br/>  97 98 99 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int X, Y, i, aux=1;
	scanf("%i %i", &X, &Y);
	while(aux<=Y) {
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
```
