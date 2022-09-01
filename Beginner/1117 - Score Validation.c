/*
Write a program that reads two scores of a student. Calculate and print the average of these scores. 
Your program must accept just valid scores [0..10]. Each score must be validated separately.

Input
The input file contains many floating-point numbers​​, positive or negative. The program execution will be finished after the input of two valid scores.

Output
When an invalid score is read, you should print the message "nota invalida".
After the input of two valid scores, the message "media = " must be printed followed by the average of the student. 
The average must be printed with 2 numbers after the decimal point.

Input Sample	Output Sample
-3.5            nota invalida
3.5             nota invalida
11.0            
10.0            media = 6.75
*/
#include <stdio.h>

int main(){
	
	float a, b, media;
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
	return 0;
}