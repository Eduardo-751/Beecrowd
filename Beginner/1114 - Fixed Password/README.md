1114 - Senha Fixa
=================

Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002. 

Entrada
-------

A entrada é composta por vários casos de testes contendo valores inteiros.

Saída
-----

Para cada valor lido mostre a mensagem correspondente à descrição do problema.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 2200 <br/> 1020 <br/> 2022 <br/> 2002 | Senha Invalida <br/> Senha Invalida <br/> Senha Invalida <br/> Acesso Permitido |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

	int entrada;
	scanf("%i", &entrada);
	while(entrada != 2002) {
		printf("Senha Invalida\n");
		scanf("%i", &entrada);
	}
	printf("Acesso Permitido\n");

	return 0;
}
```
