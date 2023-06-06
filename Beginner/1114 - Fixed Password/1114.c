#include <stdio.h>

int main(){
	
	int entrada;
	scanf("%i", &entrada);
	while(entrada != 2002) {
		printf("Senha Invalida\n");
		scanf("%i", &entrada);
	}
	printf("Acesso Permitido\n");
	
	return 0;
}