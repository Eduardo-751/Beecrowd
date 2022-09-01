/*
Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. 
Print these information like following example.

Input
The input will be 5 integer values.

Output
Print a message like the following example with all letters in lowercase, indicating how many of these values ​​are even, odd, positive and negative.

Input Sample	Output Sample
-5              3 valor(es) par(es)
0               2 valor(es) impar(es)
-3              1 valor(es) positivo(s)
-4              3 valor(es) negativo(s)
12              
*/
#include <stdio.h>
#include <math.h>

int main(){

    int i, a=0, b=0, c=0, d=0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
        else
            b++;
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            d++;
    }
    printf("%i valor(es) par(es)\n", a);
    printf("%i valor(es) impar(es)\n", b);
    printf("%i valor(es) positivo(s)\n", c);
    printf("%i valor(es) negativo(s)\n", d);
    return 0;
}