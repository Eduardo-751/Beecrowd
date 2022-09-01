/*
Write an program to read two scores of a student. Calculate and print the semester average. The program must accept only valid scores 
(a score must fit in the range [0.10]). Each score must be validated separately.

The program must print a message "novo calculo (1-sim 2-nao)" that means "new calculate (1-yes 2-no)". After, the input will be (1 or 2). 
1 means a new calculation, 2 means that the execution must be finished.

Input
The input file contains several positive or negative floating-point (double) values​. After the input of 2 valid scores, 
an integer number X will be read. Your program must stop when X = 2.

Output
If an invalid score is read, must be printed the message "nota invalida". When two valid scores are read, 
the message "media = " must be printed folowed by the average between these 2 scores. The message "novo calculo (1-sim 2-nao)" must be printed after reading X. 
This message should be displayed again if the standard input number for X is less than 1 or greater than 2, as example below.

The output average must be printed with 2 digits after the decimal point.

Input Sample	Output Sample
-3.5            nota invalida
3.5             nota invalida
11.0
10.0            media = 6.75
4               novo calculo (1-sim 2-nao)
1               novo calculo (1-sim 2-nao)
8.0             
9.0             media = 8.50
2               novo calculo (1-sim 2-nao)
*/
#include <stdio.h>

int main(){
	
	float a, b, media;
	int X=1;
	while(X == 1){
		scanf("%f", &a);
		while(a<0 || a>10) {
			printf("nota invalida\n");
			scanf("%f", &a);
		}
		scanf("%f", &b);
		while(b<0 || b>10) {
			printf("nota invalida\n");
			scanf("%f", &b);
		}
		printf("media = %.2f\n", (a+b)/2);

		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%i", &X);
		while(X!=1 && X!=2) {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i", &X);
		}
	}
	return 0;
}