#include<stdio.h>

int main(){
	
	int X, Y, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X+1;
	while(aux<Y) {
		if(aux%5==2 || aux%5==3)
			printf("%i\n", aux);
		aux++;
	}
	return 0;
}