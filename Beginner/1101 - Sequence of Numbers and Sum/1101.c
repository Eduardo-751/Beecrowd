#include<stdio.h>

int main(){
	
	int M, N, Sum=0, aux;
	while(scanf("%d %d", &M,&N)!=0) {	
		if(M<=0 || N<=0)
			break;
			
		if(N<M) {
			aux = N;
			N = M;
			M = aux;
		}			
		for(M; M<=N; M++) {
			printf("%i ", M);
			Sum+=M;
		}
		printf("Sum=%i\n", Sum);		
		Sum=0;
	}
	return 0;
}