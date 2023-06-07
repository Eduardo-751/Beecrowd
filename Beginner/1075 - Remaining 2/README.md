1075 - Resto 2
==============

Leia um valor inteiro **N**. Apresente todos os números entre 1 e 10000 que divididos por **N** dão resto igual a 2.

Entrada
-------

A entrada contém um valor inteiro **N** (**N** < 10000).

Saída
-----

Imprima todos valores que quando divididos por **N** dão resto = 2, um por linha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 13                  | 2 <br/> 15 <br/> 28 <br/> 41 <br/> ... |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int N, i;
	scanf("%i", &N);

	for(i=1; i<10000; i++)
	{
		if(i%N==2)
			printf("%i\n", i);
	}

	return 0;
}
```
