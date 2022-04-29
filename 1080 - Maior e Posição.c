#include <stdio.h>

int main(){
	
	int Maior=0, pos, i, aux;
	
	for(i=1; i<=100; i++)
	{
	   	scanf("%i", &aux);
	   	if(aux>Maior){
	   		Maior = aux;
			pos = i;	
		}
	}
	
	printf("%i\n", Maior);
	printf("%i\n", pos);
	
	return 0;
}