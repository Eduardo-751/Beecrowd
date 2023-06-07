1097 - Sequencia IJ 3
=====================

Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

Entrada
-------

Não há nenhuma entrada neste problema.

Saída
-----

Imprima a sequencia conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
|                     | I=1 J=7 <br/> I=1 J=6 <br/> I=1 J=5 <br/> I=3 J=9 <br/> I=3 J=8 <br/> I=3 J=7 <br/> ... <br/> I=9 J=15 <br/> I=9 J=14 <br/> I=9 J=13 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int i, i2=7,aux=5;

	for(i=1; i<=9; i+=2)
	{
		for(i2; i2>=aux; i2--){
			printf("I=%i J=%i\n", i, i2);
		}
		i2+=5;
		aux+=2;
	}
	return 0;
}
```
