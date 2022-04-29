#include <stdio.h>

int main(){
	
	int N, i, F, f1=0, f2=1;
	
	scanf("%i", &N);
	
	for(i=0; i<N; i++){
		if(i<2)
			F=i;
		else{
			F = f1+f2;
			f1=f2;
			f2=F;
		}
		printf("%i", F);
		if(i!=N-1)
			printf(" ");
		else
			printf("\n");
	}
	
	return 0;
}