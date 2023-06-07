1142 - PUM
==========

Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas de saída que serão apresentadas na execução do programa.

Entrada
-------

O arquivo de entrada contém um número inteiro positivo N.

Saída
-----

Imprima a saída conforme o exemplo fornecido.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 7                   | 1 2 3 PUM <br/> 5 6 7 PUM <br/> 9 10 11 PUM <br/> 13 14 15 PUM <br/> 17 18 19 PUM <br/> 21 22 23 PUM <br/> 25 26 27 PUM |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int N, n1=1, n2=2, n3=3;
	scanf("%i", &N);
	while(N>0){
		printf("%i %i %i PUM\n", n1, n2, n3);
		N--;
		n1+=4;
		n2+=4;
		n3+=4;
	}
	return 0;
}
```
