/*
Read 100 integer numbers. Print the highest read value and the input position.

Input
The input file contains 100 distinct positive integer numbers.

Output
Print the highest number read and the input position of this value, according to the given example.

Input Sample	Output Sample
2				34565
113				4
45
34565
6
...
8
*/
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