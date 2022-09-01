/*
Write a program to read the coordinates (X, Y) of an indeterminate number of points in Cartesian system. 
For each point write the quadrant to which it belongs. The program finish when at least one of two coordinates is NULL (in this situation without writing any message).

Input
The input contains several tests cases. Each test case contains two integer numbers.

Output
For each test case, print the corresponding quadrant which these coordinates belong, as in the example.

Input Sample	Output Sample
2 2             primeiro
3 -2            quarto
-8 -1           terceiro
-7 1            segundo
0 2
*/
#include <stdio.h>

int main(){
	
	int X, Y;
	scanf("%i %i", &X, &Y);
	while(X!=0 && Y!=0) {
		if(X>0)
			if(Y>0)
				printf("primeiro\n");
			else
				printf("quarto\n");
		if(X<0)
			if(Y>0)
				printf("segundo\n");
			else
				printf("terceiro\n");
				
		scanf("%i %i", &X, &Y);
	}			
	return 0;
}