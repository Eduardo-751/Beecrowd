/*
The Federação Gaúcha de Futebol invited you to write a program to present a statistical result of several GRENAIS. 
Write a program that read the number of goals scored by Inter and the number of goals scored by Gremio in a GRENAL. 
Write the message "Novo grenal (1-sim 2-nao)" and request a response. If the answer is 1, two new numbers must be read (another input case) asking the number of goals scored 
by the teams in a new departure, otherwise the program must be finished, printing:

- How many GRENAIS were part of the statistics.
- The number of victories of Inter.
- The number of victories of Gremio.
- The number of Draws.
- A message indicating the team that won the largest number of GRENAIS (or the message: "Não houve vencedor" if both team won the same quantity of GRENAIS).

Input
The input contains two integer values​​, corresponding to the goals scored by both teams. Then there is an integer (1 or 2), corresponding to the repetition of the algorithm.

Output
After each reading of the goals it must be printed the message "Novo grenal (1-sim 2-nao)". When the program is finished, 
the program must print the statistics as the example below.

Input Sample	Output Sample
3 2             
1               Novo grenal (1-sim 2-nao)
2 3
1               Novo grenal (1-sim 2-nao)
3 1
2               Novo grenal (1-sim 2-nao)
                3 grenais
                Inter:2
                Gremio:1
                Empates:0
                Inter venceu mais
*/
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