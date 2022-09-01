/*
Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.

Input
The input will be a positive integer value.

Output
The output will be a sequence of six odd numbers.

Input Sample	Output Sample
8               9
                11
                13
                15
                17
                19
*/
#include <stdio.h>

int main(){

    int a, i;
    
    scanf("%i", &a);
    for(i=a; i<=a+11; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }
    
    return 0;
}