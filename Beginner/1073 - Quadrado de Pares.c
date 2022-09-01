#include<stdio.h>

int main(){
	
	int max, i;
	
	scanf("%i", &max);
	
	for(i=2; i<=max; i++){
		if(i%2 == 0)
			printf("%i^2 = %i\n", i, i*i);
	}
	
	return 0;
}