#include <stdio.h>

int main(){
	
	int i, i2=7,aux=5;
	
	for(i=1; i<=9; i+=2)
	{
		for(i2; i2>=aux; i2--){
			printf("I=%i J=%i\n", i, i2);
		}
		i2+=5;
		aux+=2;
	}
	return 0;
}