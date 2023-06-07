1144 - Sequência Lógica
=======================

Leia um valor inteiro **N**. Apresente o quadrado de cada um dos valores pares, de 1 até **N**, inclusive **N**, se for o caso.

Entrada
-------

A entrada contém um valor inteiro **N** (5 < **N** < 2000).

Saída
-----

Imprima o quadrado de cada um dos valores pares, de 1 até **N**, conforme o exemplo abaixo.

Tome cuidado! Algumas linguagens tem por padrão apresentarem como saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada. Neste caso, configure a precisão adequadamente para que isso não ocorra.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 6                   | 2^2 = 4 <br/> 4^2 = 16 <br/> 6^2 = 36 |

&nbsp;

### C99

```c
#include<stdio.h>
#include <math.h>

int main(){

	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N){
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		printf("%i %i %i\n", aux, (aux*aux)+1, (aux*aux*aux)+1);
		aux++;
	}
	return 0;
}
```
