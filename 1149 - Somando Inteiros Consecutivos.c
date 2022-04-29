#include <stdio.h>

int main(){
	
	int A, N, i, Soma=0;
	scanf("%i", &A);
	
	do{
		scanf("%i", &N);
	}while(N<=0);
	
	for(i=0; i<N; i++){
		Soma += (A+i);
	}
	printf("%i\n", Soma);
	return 0;
}