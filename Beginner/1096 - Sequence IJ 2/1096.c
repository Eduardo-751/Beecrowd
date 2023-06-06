#include <stdio.h>

int main(){
	
	int i, i2;
	
	for(i=1; i<=9; i+=2)
	{
		for(i2=7; i2>=5; i2--){
			printf("I=%i J=%i\n", i, i2);
		}
	}
	return 0;
}