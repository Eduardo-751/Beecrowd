/*
Read two nteger values (A and B). After, the program should print the message "Sao Multiplos" (are multiples) or "Nao sao Multiplos" (aren’t multiples), corresponding to the read values.

Input
The input has two integer numbers.

Output
Print the relative message to the input as stated above.

Input Sample	Output Sample
6 24            Sao Multiplos

6 25            Nao sao Multiplos
*/
#include <stdio.h>
#include <math.h>

int main(){

    int A, B;

    scanf("%i %i", &A, &B);
    if(A<B && B%A==0)
        printf("Sao Multiplos\n");

    else if(B<A && A%B==0)
        printf("Sao Multiplos\n");

    else
        printf("Nao sao Multiplos\n");

    return 0;
}