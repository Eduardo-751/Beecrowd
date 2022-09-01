/*
Your program must read an integer X indefinited times (the program must stop when X is equal to zero). For each X print the sequence from 1 to X, 
with one space between each one of these numbers.

PS: Be carefull. Don't leave any space after the last number of each line, otherwise you'll get Presentation Error.

Input
The input file contains many integer numbers. The last one is zero.

Output
For each number N of the input file, one output line must be printed, from 1 to N like the following example. Be careful with blank spaces after the last line number.

Input Sample	Output Sample
5               1 2 3 4 5
10              1 2 3 4 5 6 7 8 9 10
3               1 2 3
0
*/
#include<stdio.h>

int main(){
	
	int X, i, aux;
	scanf("%i", &X);
	while(X!=0){
		aux=1;
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
		scanf("%i", &X);
	}
	return 0;
}