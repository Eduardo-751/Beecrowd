/*
Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.

Input
The input contains an integer N (5 < N < 2000).

Output
Print the square of each one of the even values from 1 to N, as the given example.

Be carefull! Some language automaticly print 1e+006 instead 1000000. Please configure your program to print the correct format setting the output precision.

Input Sample	Output Sample
6				2^2 = 4
				4^2 = 16
				6^2 = 36
*/
#include<stdio.h>

int main(){
	
	int max, i;
	
	scanf("%i", &max);
	
	for(i=2; i<=max; i++){
		if(i%2 == 0)
			printf("%i^2 = %i\n", i, i*i);
	}
	
	return 0;
}