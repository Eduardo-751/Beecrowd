1146 - Sequências Crescentes
============================

Este programa deve ler uma variável inteira **X** inúmeras vezes (deve parar quando o valor no arquivo de entrada for igual a zero). Para cada valor lido imprima a sequência de 1 até **X**, com um espaço entre cada número e seu sucessor.  
  
Obs: cuide para não deixar espaço em branco após o último valor apresentado na linha ou você receberá **_Presentation Error_**.

Entrada
-------

O arquivo de entrada contém vários números inteiros. O último número no arquivo de entrada é 0.

Saída
-----

Para cada número **N** do arquivo de entrada deve ser impressa uma linha de 1 até **N**, conforme o exemplo abaixo. Não deve haver espaço em branco após o último valor da linha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 5 <br/> 10 <br/> 3 <br/> 0 | 1 2 3 4 5 <br/> 1 2 3 4 5 6 7 8 9 10 <br/> 1 2 3 |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int X, i, aux;
	scanf("%i", &X);
	while(X!=0){
		aux=1;
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
		scanf("%i", &X);
	}
	return 0;
}
```
