/*
Read an integer N. This N will be the number of integer numbers X that will be read.

Print how many these numbers X are in the interval [10,20] and how many values are out of this interval.
 

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases.
Each case is an integer number X (-107 < X < 107).

 

Output
For each test case, print how many numbers are in and how many values are out of the interval.

Input Sample	Output Sample
4               2 in
14              2 out
123
10
-25
*/
#include <stdio.h>
 
int main() {
 
    double aux;
    int casos, i, in=0, out=0;
    
    scanf("%i", &casos);
    
    for(i=0; i<casos; i++){
        scanf("%lf", &aux);
        
        if(aux>=10 && aux<=20)
            in++;
        
        else
            out++;
    }
    
    printf("%i in\n", in);
    printf("%i out\n", out);
    
    return 0;
}