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