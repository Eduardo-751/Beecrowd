/*
Write a program that read two numbers X and Y and print the result of dividing the X by Y. If it's not possible, print the message "divisao impossivel".

Input
The input contains an integer number N. This N is the quantity of pairs of integer numbers X and Y read (dividend and divisor).

Output
For each test case print the result of this division with one digit after the decimal point, or “divisao impossivel” if it isn't possible to perform the calculation.

Obs.: Be carefull. The division between two integers in some languages generates another integer. Use cast:)

Input Sample	Output Sample
3
3 -2            -1.5
-8 0            divisao impossivel
0 8             0.0
*/
#include<stdio.h>

int main(){
	
	int N, X, Y;
	scanf("%i", &N);
	while(N>0) {
		scanf("%i %i", &X, &Y);
		if(Y==0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", (float)X/Y);
		N--;
	}
}