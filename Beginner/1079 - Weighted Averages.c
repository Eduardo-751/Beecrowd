/*
Read an integer N, which represents the number of following test cases. Each test case consists of three floating-point numbers, each one with one digit after the decimal point. 
Print the weighted average for each of these sets of three numbers, considering that the first number has weight 2, 
the second number has weight 3 and the third number has weight 5.

Input
The input file contains an integer number N in the first line. Each N following line is a test case with three float-point numbers, 
each one with one digit after the decimal point.

Output
For each test case, print the weighted average according with below example.

Input Sample	Output Sample
3
6.5 4.3 6.2		5.7
5.1 4.2 8.1		6.3
8.0 9.0 10.0	9.3
*/
#include <stdio.h>

int main(){
	
	int N, i;
	double n1, n2, n3, media;
	
	scanf("%i", &N);
	
	for(i=1; i<=N; i++)
	{
	   	scanf("%lf %lf %lf", &n1, &n2, &n3);
	   	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	   	printf("%.1lf\n", media);
	}
	return 0;
}