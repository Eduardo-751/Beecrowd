/*
Read an undetermined number of pairs values M and N (stop when any of these values is less or equal to zero). 
For each pair, print the sequence from the smallest to the biggest (including both) and the sum of consecutive integers between them (including both).

Input
The input file contains pairs of integer values M and N. The last line of the file contains a number zero or negative, or both.

Output
For each pair of numbers, print the sequence from the smallest to the biggest and the sum of these values, as shown below.

Input Sample	Output Sample
5 2             2 3 4 5 Sum=14
6 3             3 4 5 6 Sum=18
5 0
*/
#include<stdio.h>

int main(){
	
	int M, N, Sum=0, aux;
	while(scanf("%d %d", &M,&N)!=0) {	
		if(M<=0 || N<=0)
			break;
			
		if(N<M) {
			aux = N;
			N = M;
			M = aux;
		}			
		for(M; M<=N; M++) {
			printf("%i ", M);
			Sum+=M;
		}
		printf("Sum=%i\n", Sum);		
		Sum=0;
	}
	return 0;
}