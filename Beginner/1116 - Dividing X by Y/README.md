1116 - Dividindo X por Y
========================

Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.

Entrada
-------

A entrada contém um número inteiro **N**. Este **N** será a quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida.

Saída
-----

Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso não seja possível efetuar o cálculo.

**Obs.:** Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 3 <br/> 3 -2 <br/> -8 0 <br/> 0 8 | -1.5 <br/> divisao impossivel <br/> 0.0 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int N, X, Y;
	scanf("%i", &N);
	while(N>0) {
		scanf("%i %i", &X, &Y);
		if(Y==0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", (float)X/Y);
		N--;
	}
}
```
