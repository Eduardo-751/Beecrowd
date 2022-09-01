/*
Write an program that reads two numbers X and Y (X < Y). After this, show a sequence of 1 to y, passing to the next line to each X numbers.

Input
The input contains two integer numbers X (1 < X < 20) and Y (X < Y < 100000).

Output
Each sequence must be printed in one line, with a blank space between each number, like the following example.

Input Sample	Output Sample
3 99            1 2 3
                4 5 6
                7 8 9
                10 11 12
                ...
                97 98 99
*/
#include<stdio.h>

int main(){
	
	int X, Y, i, aux=1;
	scanf("%i %i", &X, &Y);
	while(aux<=Y) {
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}