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