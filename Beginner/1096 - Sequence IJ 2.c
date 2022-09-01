/*
Make a program that prints the sequence like the following exemple.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

Input Sample	Output Sample
                I=1 J=7
                I=1 J=6
                I=1 J=5
                I=3 J=7
                I=3 J=6
                I=3 J=5
                ...
                I=9 J=7
                I=9 J=6
                I=9 J=5
*/
#include <stdio.h>

int main(){
	
	int i, i2;
	
	for(i=1; i<=9; i+=2)
	{
		for(i2=7; i2>=5; i2--){
			printf("I=%i J=%i\n", i, i2);
		}
	}
	return 0;
}