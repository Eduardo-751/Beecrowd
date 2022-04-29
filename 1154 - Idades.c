#include <stdio.h>

int main(){
	
	int Idade, Soma, N=0;
	double Media;
	
	do{
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