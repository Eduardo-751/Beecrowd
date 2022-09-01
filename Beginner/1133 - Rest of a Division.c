/*
Write a program that reads two integer numbers X and Y. Print all numbers between X and Y which dividing it by 5 the rest is equal to 2 or equal to 3.

Input
The input file contains 2 any positive integers, not necessarily in ascending order.

Output
Print all numbers according to above description, always in ascending order.

Input Sample	Output Sample
10              12
18              13
                17
*/
#include<stdio.h>

int main(){
	
	int X, Y, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X+1;
	while(aux<Y) {
		if(aux%5==2 || aux%5==3)
			printf("%i\n", aux);
		aux++;
	}
	return 0;
}