#include <stdio.h>

int main(){
	
	int X, Y;
	scanf("%i %i", &X, &Y);
	while(X!=0 && Y!=0) {
		if(X>0)
			if(Y>0)
				printf("primeiro\n");
			else
				printf("quarto\n");
		if(X<0)
			if(Y>0)
				printf("segundo\n");
			else
				printf("terceiro\n");
				
		scanf("%i %i", &X, &Y);
	}			
	return 0;
}