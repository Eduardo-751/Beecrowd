/*
Read two integer values X and Y. Print the sum of all odd values between them.

Input
The input file contain two integer values.

Output
The program must print an integer number. This number is the sum off all odd values between both input values that must fit in an integer number.

Sample Input	Sample Output
6               5
-5

15              13
12

12              0
12
*/
#include <stdio.h>
 
int main() {
 
    int i, a, b, soma=0;
    
    scanf("%i %i", &a, &b);
    
    if (a<b){
        for(i=a+1; i<b; i++){
            if(i%2 == 1)
                soma = soma+i;
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    else{
        for(i=b+1; i<a; i++){
            if(i%2 == 1)
                soma = soma+(i);
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    
    printf("%i\n", soma);
    
    return 0;
}