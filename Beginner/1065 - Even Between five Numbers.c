/*
Make a program that reads five integer values. Count how many of these values ​​are even and  print this information like the following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many even numbers were typed.

Input Sample	Output Sample
7               3 valores pares
-5
6
-4
12
*/
#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
    }
    printf("%i valores pares\n", a);
    return 0;
}