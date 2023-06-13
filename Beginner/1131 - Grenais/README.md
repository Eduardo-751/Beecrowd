1131 - Grenais
==============

A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado novamente solicitando o número de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado imprimindo:

\- Quantos GRENAIS fizeram parte da estatística.  
\- O número de vitórias do Inter.  
\- O número de vitórias do Grêmio.  
\- O número de Empates.  
\- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou "Nao houve vencedor", caso termine empatado).

Entrada
-------

O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um inteiro (1 ou 2), correspondente à repetição do programa.

Saída
-----

Após cada leitura dos gols, deve ser impressa a mensagem "Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem ser mostradas as estatísticas conforme a descrição apresentada acima. Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 3 2 <br/> 1 <br/> 2 3 <br/> 1 <br/> 3 1 <br/> 2 | Novo grenal (1-sim 2-nao) <br/> Novo grenal (1-sim 2-nao) <br/> Novo grenal (1-sim 2-nao) <br/> 3 grenais <br/> Inter:2 <br/> Gremio:1 <br/> Empates:0 <br/> Inter venceu mais |

&nbsp;

### C99

```c
#include<stdio.h>

int main(){

	int Gremio=0, Inter=0, Empate=0, Grenais=0, aux=1, golGremio, golInter;

	while(aux==1){
		scanf("%i %i", &golInter, &golGremio);
		Grenais++;
		if(golInter>golGremio)
			Inter++;
		else if(golInter<golGremio)
			Gremio++;
		else
			Empate++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%i", &aux);
	}
	printf("%i grenais\n", Grenais);
	printf("Inter:%i\n", Inter);
	printf("Gremio:%i\n", Gremio);
	printf("Empates:%i\n", Empate);
	if(Inter>Gremio)
		printf("Inter venceu mais\n");
	else if(Gremio>Inter)
		printf("Gremio venceu mais\n");
	else
		printf("Nao houve vencedor\n");

	return 0;
}
```
