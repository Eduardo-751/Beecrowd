/*
Write a program that reads two integer numbers X and Y and calculate the sum of all number not divisible by 13 between them, including both.

Input
The input file contains 2 integer numbers X and Y without any order.

Output
Print the sum of all numbers between X and Y not divisible by 13, including them if it is the case.

Input Sample	Output Sample
100             13954
200
*/
#include<stdio.h>

int main() {

	int X, Y, Soma=0, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X;
	while(aux<=Y){
		if(aux%13 != 0)
			Soma+=aux;
		aux++;
	}
	printf("%i\n", Soma);
	return 0;
}