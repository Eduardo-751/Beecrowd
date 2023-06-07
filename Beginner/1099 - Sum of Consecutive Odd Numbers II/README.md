1099 - Soma de Ímpares Consecutivos II
======================================

Leia um valor inteiro **N** que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros **X** e **Y**. Você deve apresentar a soma de todos os ímpares existentes _**entre**_ **X** e **Y**.

Entrada
-------

A primeira linha de entrada é um inteiro **N** que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros **X** e **Y**.

Saída
-----

Imprima a soma de todos valores ímpares **_entre_ X** e **Y**.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7 <br/> 4 5 <br/> 13 10 <br/> 6 4 <br/> 3 3 <br/> 3 5 <br/> 3 4 <br/> 3 8 | 0 <br/> 11 <br/> 5 <br/> 0 <br/> 0 <br/> 0 <br/> 12 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int N, X, Y, Soma=0;
	scanf("%i", &N);
	while(N>0){

		scanf("%i %i", &X, &Y);
		if(X<Y){
			X++;
			for(X; X<Y; X++){
				if(X%2 == 1)
					Soma+=X;
			}
		}
		else{
			Y++;
			for(Y; Y<X; Y++){
				if(Y%2 == 1)
					Soma+=Y;
			}
		}
		printf("%i\n", Soma);
		Soma=0;
		N--;
	}
	return 0;
}
```
