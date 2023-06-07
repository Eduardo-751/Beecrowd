1117 - Validação de Nota
========================

Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao intervalo \[0,10\]). Cada nota deve ser validada separadamente.

Entrada
-------

A entrada contém vários valores reais, positivos ou negativos. O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
-----

Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".  
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. O valor deve ser apresentado com duas casas após o ponto decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -3.5 <br/> 3.5 <br/> 11.0 <br/> 10.0 | nota invalida <br/> nota invalida <br/> media = 6.75 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	float a, b, media;
	scanf("%f", &a);
	while(a<0 || a>10) {
		printf("nota invalida\n");
		scanf("%f", &a);
	}
	scanf("%f", &b);
	while(b<0 || b>10) {
		printf("nota invalida\n");
		scanf("%f", &b);
	}
	printf("media = %.2f\n", (a+b)/2);
	return 0;
}
```
