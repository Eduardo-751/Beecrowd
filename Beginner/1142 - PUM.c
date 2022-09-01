/*
Write a program that reads an integer N. This N is the number of output lines printed by this program.

Input
The input file contains an integer N.

Output
Print the output according to the given example.

Input Sample	Output Sample
7               1 2 3 PUM
                5 6 7 PUM
                9 10 11 PUM
                13 14 15 PUM
                17 18 19 PUM
                21 22 23 PUM
                25 26 27 PUM
*/
#include<stdio.h>

int main(){
	
	int N, n1=1, n2=2, n3=3;
	scanf("%i", &N);
	while(N>0){
		printf("%i %i %i PUM\n", n1, n2, n3);
		N--;
		n1+=4;
		n2+=4;
		n3+=4;
	}
	return 0;
}