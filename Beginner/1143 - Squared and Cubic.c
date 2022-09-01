/*
Write a program that reads an integer N (1 < N < 1000). This N is the number of output lines printed by this program.

Input
The input file contains an integer N.

Output
Print the output according to the given example.

Input Sample	Output Sample
5               1 1 1
                2 4 8
                3 9 27
                4 16 64
                5 25 125
*/
#include<stdio.h>

int main(){
	
	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N) {
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		aux++;
	}
	return 0;
}