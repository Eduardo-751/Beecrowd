#include<stdio.h>

int main(){
	
	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N) {
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		aux++;
	}
	return 0;
}