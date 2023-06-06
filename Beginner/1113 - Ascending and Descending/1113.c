#include <stdio.h>

int main(){
	
	int X, Y;
	do{
	scanf("%i %i", &X, &Y);
	if(X < Y)
		printf("Crescente\n");
	else if(Y<X)
		printf("Decrescente\n");

	}while(X!=Y);
	return 0;
}