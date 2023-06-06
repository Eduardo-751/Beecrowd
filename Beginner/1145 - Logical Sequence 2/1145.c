#include<stdio.h>

int main(){
	
	int X, Y, i, aux=1;
	scanf("%i %i", &X, &Y);
	while(aux<=Y) {
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}