#include <stdio.h>

int main(){
	
	int testes, aux, i;
	
	scanf("%i", &testes);
	
	for(i=0; i<testes; i++)
	{
		scanf("%i", &aux);
		
		if(aux%2==0 && aux!=0)
			printf("EVEN ");
		else if((aux%2==1 || aux%2==-1) && aux!=0)
			printf("ODD ");
			
		if(aux>0)
			printf("POSITIVE\n");
		else if(aux<0)
			printf("NEGATIVE\n");
		else
			printf("NULL\n");
	}
	
	return 0;
}