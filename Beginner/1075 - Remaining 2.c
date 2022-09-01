/*
Read an integer N. Print all numbers between 1 and 10000, which divided by N will give the rest = 2.

Input
The input is an integer N (N < 10000)

Output
Print all numbers between 1 and 10000, which divided by n will give the rest = 2, one per line.

Input Sample	Output Sample
13				2
				15
				28
				41
				...
*/
#include <stdio.h>

int main(){
	
	int N, i;
	scanf("%i", &N);

	for(i=1; i<10000; i++)
	{
		if(i%N==2)
			printf("%i\n", i);
	}

	return 0;
}