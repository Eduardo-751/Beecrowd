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