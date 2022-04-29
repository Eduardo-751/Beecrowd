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