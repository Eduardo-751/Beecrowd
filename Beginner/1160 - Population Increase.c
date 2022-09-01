/*
Mariazinha wants to solve an interesting problem. Given the population and growing rate of 2 cities (A and B), 
she would like to know how many years would be necessary to the smaller city (always A) to be greater than the larger city (always B) in population. 
Of course, she only wants to know the result for cities that the growing rate for city A is bigger than the growing rate for city B, therefore, 
she separated these test cases for you. Your job is to build a program that print the time in years for each test case.

However, in some cases the time can be so big and Mariazinha don't want to know the exact time for these cases. In this way, 
for these test cases, it is enough printing the message "Mais de 1 seculo", that means "More than a Century".

Input
The first line of the input contains a single integer T, indicating the number of test cases (1 ≤ T ≤ 3000). 
Each test case contains four numbers: two integers PA and PB (100 ≤ PA < 1000000, 100 ≤ PB ≤ 1000000, PA < PB) 
indicating respectively the population of A and B and two numbers G1 and G2 (0.1 ≤ G1 ≤ 10.0, 0.0 ≤ G2 ≤ 10.0, G2 < G1) 
with one digit after the decimal point each, indicating the populational growing (in percentual) for A and B respectively.

Pay attention please: The population always is an integer number. So, a growing of 2.5% over a population of 100 will result in 102 (instead of 102.5)
 and a growing of 2.5% over a population of 1000 will result in 1025. In addition, use double variables to the growing rate.

Output
Print, for each test case, how many years would be necessary to the city A became greater than the city B (in inhabitants). 
Remember that if this time is greater than 100 it will be necessary printing the message: "Mais de 1 seculo". In each one of these cases, 
maybe would be interesting interrupt the counting, otherwise you'll get "Time Limit Exceeded".

Input Sample	        Output Sample
6
100 150 1.0 0           51 anos.
90000 120000 5.5 3.5    16 anos.
56700 72000 5.2 3.0     12 anos.
123 2000 3.0 2.0        Mais de 1 seculo.
100000 110000 1.5 0.5   10 anos.
62422 484317 3.1 1.0    100 anos.
*/
#include <stdio.h>

int main(){

    int cases, count, PA, PB;
    int i, i2;
    float G1, G2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        count=0;
        scanf("%i %i %f %f", &PA, &PB, &G1, &G2);
        float G1aux = (G1/100 + 1);
        for(i2=PA; i2<=PB; i2*=G1aux) {
            PB*=((G2/100 ) +1);
            count++;
            if(count > 100)
                break;
        }
        if(count > 100)
            printf("Mais de 1 seculo.\n");
        else
        printf("%i anos.\n", count);
    }

    return 0;
}