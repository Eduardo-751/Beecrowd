#include <stdio.h>

int main(){
	
	int N, i;
	
	scanf("%i", &N);
	
	for(i=N-1; i>0; i--){
		N = N*i;
	}
	printf("%i\n", N);
	
	return 0;
}