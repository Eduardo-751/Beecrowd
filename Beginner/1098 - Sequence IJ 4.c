/*
Make a program that prints the sequence like the following example.

Input
This problem doesn't have input.

Output
Print the sequence like the example below.

Input Sample	Output Sample
                I=0 J=1
                I=0 J=2
                I=0 J=3
                I=0.2 J=1.2
                I=0.2 J=2.2
                I=0.2 J=3.2
                .....
                I=2 J=?
                I=2 J=?
                I=2 J=?
*/
#include <stdio.h>
#include <math.h>
int main() {
    float i, j;
    for(i=0; i<2.1; i=i+0.2) {
        j=i+1;
        if(i==0 || i==1 || i>1.9) {
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}