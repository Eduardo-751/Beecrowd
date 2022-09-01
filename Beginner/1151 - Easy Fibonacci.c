/*
The following sequence of numbers 0 1 1 2 3 5 8 13 21 ... is known as the Fibonacci Sequence. Thereafter, 
each number after the first 2 is equal to the sum of the previous two numbers. Write an algorithm that reads an integer 
N (N < 46) and that print the first N numbers of this sequence.

Input
The input file contains an integer number N (0 < N < 46).

Output
The numbers ​​should be printed on the same line, separated by a blank space. There is no space after the last number.

Thanks to Cássio F.

Input Sample	Output Sample
5				0 1 1 2 3
*/
#include <stdio.h>

int main(){
	
	int N, i, F, f1=0, f2=1;
	scanf("%i", &N);
	for(i=0; i<N; i++) {
		if(i<2)
			F=i;
		else{
			F = f1+f2;
			f1=f2;
			f2=F;
		}
		printf("%i", F);
		if(i!=N-1)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}