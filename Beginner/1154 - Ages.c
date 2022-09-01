/*
Write an algorithm to read an undeterminated number of data, each containing an individual's age. The final data, which will not enter in the calculations, 
contains the value of a negative age. Calculate and print the average age of this group of individuals.

Input
The input contains an undetermined number of integers. The input will be stop when a negative value is read.

Output
The output contains a value corresponding to the average age of individuals.
The average should be printed with two digits after the decimal point.

Input Sample	Output Sample
34				39.25
56
44
23
-2
*/
#include <stdio.h>

int main(){
	
	int Idade, Soma, N=0;
	double Media;
	do {
		scanf("%i", &Idade);
		if(Idade >= 0){
			Soma+=Idade;
			N++;
		}		
	}while(Idade>=0);
	Media = (double)Soma/N;
	printf("%.2lf\n", Media);
	return 0;
}