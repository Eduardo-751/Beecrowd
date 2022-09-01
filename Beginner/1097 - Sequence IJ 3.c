/*
Make a program that prints the sequence like the following exemple.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

Input Sample	Output Sample
                I=1 J=7
                I=1 J=6
                I=1 J=5
                I=3 J=9
                I=3 J=8
                I=3 J=7
                ...
                I=9 J=15
                I=9 J=14
                I=9 J=13
*/
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