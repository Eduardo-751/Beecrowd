/*
Read an integer N that is the number of test cases. Each test case is a line containing two integer numbers X and Y. 
Print the sum of all odd values between them, not including X and Y.

Input
The first line of input is an integer N that is the number of test cases that follow. Each test case is a line containing two integer X and Y.

Output
Print the sum of all odd numbers between X and Y.

Input Sample	Output Sample
7
4 5             0
13 10           11
6 4             5
3 3             0
3 5             0
3 4             0
3 8             12
*/
#include<stdio.h>

int main(){
	
	int N, X, Y, Soma=0;
	scanf("%i", &N);
	while(N>0){
		
		scanf("%i %i", &X, &Y);
		if(X<Y){
			X++;
			for(X; X<Y; X++){
				if(X%2 == 1)
					Soma+=X;
			}
		}
		else{
			Y++;
			for(Y; Y<X; Y++){
				if(Y%2 == 1)
					Soma+=Y;
			}			
		}
		printf("%i\n", Soma);
		Soma=0;
		N--;
	}
	return 0;
}