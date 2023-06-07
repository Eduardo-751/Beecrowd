1154 - Idades
=============

Faça um algoritmo para ler um número indeterminado de dados, contendo cada um, a idade de um indivíduo. O último dado, que não entrará nos cálculos, contém o valor de idade negativa. Calcular e imprimir a idade média deste grupo de indivíduos.

Entrada
-------

A entrada contém um número indeterminado de inteiros. A entrada será encerrada quando um valor negativo for lido.

Saída
-----

A saída contém um valor correspondente à média de idade dos indivíduos.

A média deve ser impressa com dois dígitos após o ponto decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 34 <br/> 56 <br/> 44 <br/> 23 <br/> -2 | 39.25                 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int Idade, Soma, N=0;
	double Media;
	do {
		scanf("%i", &Idade);
		if(Idade >= 0){
			Soma+=Idade;
			N++;
		}
	}while(Idade>=0);
	Media = (double)Soma/N;
	printf("%.2lf\n", Media);
	return 0;
}
```
