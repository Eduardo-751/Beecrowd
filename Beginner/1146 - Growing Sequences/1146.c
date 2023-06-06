#include<stdio.h>

int main(){
	
	int X, i, aux;
	scanf("%i", &X);
	while(X!=0){
		aux=1;
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
		scanf("%i", &X);
	}
	return 0;
}