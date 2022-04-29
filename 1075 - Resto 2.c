#include <stdio.h>

int main(){
	
	int N, i;
	scanf("%i", &N);

	for(i=1; i<10000; i++)
	{
		if(i%N==2)
			printf("%i\n", i);
	}

	return 0;
}