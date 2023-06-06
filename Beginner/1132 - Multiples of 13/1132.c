#include<stdio.h>

int main() {

	int X, Y, Soma=0, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X;
	while(aux<=Y){
		if(aux%13 != 0)
			Soma+=aux;
		aux++;
	}
	printf("%i\n", Soma);
	return 0;
}