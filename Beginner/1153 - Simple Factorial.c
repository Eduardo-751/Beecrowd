/*
Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Input
The input contains an integer value N (0 < N < 13).

Output
The output contains an integer value corresponding to the factorial of N.

Input Sample	Output Sample
4				24
*/
#include <stdio.h>

int main(){
	
	int N, i;
	scanf("%i", &N);
	for(i=N-1; i>0; i--) {
		N = N*i;
	}
	printf("%i\n", N);
	return 0;
}