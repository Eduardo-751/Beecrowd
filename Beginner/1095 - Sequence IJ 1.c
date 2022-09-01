/*
Make a program that prints the sequence like the following example.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

Input Sample	Output Sample
                I=1 J=60
                I=4 J=55
                I=7 J=50
                ...
                I=? J=0
*/
#include <stdio.h>

int main(void) {

    int i, j=60;

    for(i=1;i<40;i+=3){
        printf("I=%i J=%i\n",i,j); 
        j-=5;
    }

    return 0;
}