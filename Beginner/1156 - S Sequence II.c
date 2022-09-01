/*
Write an algorithm to calculate and write the value of S, S being given by:
S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?

Input
There is no input in this problem.

Output
The output contains a value corresponding to the value of S.
The value should be printed with two digits after the decimal point.
*/
#include <stdio.h>

int main() {

    float Sum=0, i, i2=1;
    for(i=1; i<=39; i+=2){
        Sum+=i/i2;
        i2*=2;
    }
    printf("%.2f\n", Sum);
    return 0;
}