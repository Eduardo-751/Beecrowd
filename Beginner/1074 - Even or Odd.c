/*
Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), 
although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..

Output
For each test case, print a corresponding message, according to the below example. 
All messages must be printed in uppercase letters and always will have one space between two words in the same line.

Input Sample	Output Sample
4
-5				ODD NEGATIVE
0				NULL
3				ODD POSITIVE
-4				EVEN NEGATIVE
*/
#include <stdio.h>

int main(){
	
	int testes, aux, i;
	
	scanf("%i", &testes);
	
	for(i=0; i<testes; i++)
	{
		scanf("%i", &aux);
		
		if(aux%2==0 && aux!=0)
			printf("EVEN ");
		else if((aux%2==1 || aux%2==-1) && aux!=0)
			printf("ODD ");
			
		if(aux>0)
			printf("POSITIVE\n");
		else if(aux<0)
			printf("NEGATIVE\n");
		else
			printf("NULL\n");
	}
	
	return 0;
}