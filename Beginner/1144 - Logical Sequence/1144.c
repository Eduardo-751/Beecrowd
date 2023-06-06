#include<stdio.h>
#include <math.h>

int main(){
	
	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N){
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		printf("%i %i %i\n", aux, (aux*aux)+1, (aux*aux*aux)+1);
		aux++;
	}
	return 0;
}