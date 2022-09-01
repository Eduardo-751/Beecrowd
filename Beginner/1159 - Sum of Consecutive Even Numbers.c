/*
The program must read an integer X indefinite times (stop when X=0). For each X, print the sum of five consecutive even numbers from X, 
including it if X is even. If the input number is 4, for example, the output must be 40, that is the result of the operation: 4+6+8+10+12.
If the input number is 11, for example, the output must be 80, that is the result of 12+14+16+18+20.

Input
The input file contains many integer numbers. The last one is zero.

Output
Print the output according to the example below.

Input Sample	Output Sample
4               40
11              80
0
*/
#include <stdio.h>

int main(){

    int X, Y, Sum;
    scanf("%i", &X);
    while(X != 0){
        Sum=0;
        Y=5;
        do {
            if(X%2 == 0) {
                Sum+=X;
                Y--;
            }
            X++;
        }while(Y>0);
        printf("%i\n", Sum);
        scanf("%i", &X);
    }
    return 0;
}