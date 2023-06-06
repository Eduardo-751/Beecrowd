#include <stdio.h>

int main(){
	
	int X, Z, i;
	scanf("%i", &X);
	
	do {
		scanf("%i", &Z);
	}while(Z<=X);
	int Soma = X;
	for(i=1; Soma<=Z; i++) {
		Soma += (X+i);
	}
	
	printf("%i\n", i);
	return 0;
}