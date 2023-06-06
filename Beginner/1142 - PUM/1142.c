#include<stdio.h>

int main(){
	
	int N, n1=1, n2=2, n3=3;
	scanf("%i", &N);
	while(N>0){
		printf("%i %i %i PUM\n", n1, n2, n3);
		N--;
		n1+=4;
		n2+=4;
		n3+=4;
	}
	return 0;
}