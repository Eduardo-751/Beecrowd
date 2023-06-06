#include<stdio.h>

int main(){
	
	int N, X, Y;
	scanf("%i", &N);
	while(N>0) {
		scanf("%i %i", &X, &Y);
		if(Y==0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", (float)X/Y);
		N--;
	}
}