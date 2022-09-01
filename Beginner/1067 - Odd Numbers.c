/*
Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

Input
The input will be an integer value.

Output
Print all odd values between 1 and X, including X if is the case.

Input Sample	Output Sample
8               1
                3
                5
                7
*/
#include <stdio.h>

int main(){

    int a, i;
    scanf("%i", &a);
    
    for(i=1; i<=a; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }
    
    return 0;
}