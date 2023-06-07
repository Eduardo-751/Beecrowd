1113 - Crescente e Decrescente
==============================

Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
-------

A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
-----

Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem crescente, caso contrário imprima a mensagem “Decrescente”.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 5 4 <br/> 7 2 <br/> 3 8 <br/> 2 2 | Decrescente <br/> Decrescente <br/> Crescente |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int X, Y;
	do{
	scanf("%i %i", &X, &Y);
	if(X < Y)
		printf("Crescente\n");
	else if(Y<X)
		printf("Decrescente\n");

	}while(X!=Y);
	return 0;
}
```
