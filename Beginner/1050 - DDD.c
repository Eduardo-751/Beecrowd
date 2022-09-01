/*
Read an integer number that is the code number for phone dialing. Then, print the destination according to the following table:

https://www.beecrowd.com.br/judge/en/problems/view/1050

If the input number isn’t found in the above table, the output must be:
DDD nao cadastrado
That means “DDD not found” in Portuguese language.

Input
The input consists in a unique integer number.

Output
Print the city name corresponding to the input DDD. Print DDD nao cadastrado if doesn't exist corresponding DDD to the typed number.

Input Sample	Output Sample
11              Sao Paulo
*/
#include <stdio.h>
#include <math.h>

int main(){

    int DDD;
    scanf("%i", &DDD);

    if(DDD == 61)
        printf("Brasilia\n");
    else if(DDD == 71)
        printf("Salvador\n");
    else if(DDD == 11)
        printf("Sao Paulo\n");
    else if(DDD == 21)
        printf("Rio de Janeiro\n");
    else if(DDD == 32)
        printf("Juiz de Fora\n");
    else if(DDD == 19)
        printf("Campinas\n");
    else if(DDD == 27)
        printf("Vitoria\n");
    else if(DDD == 31)
        printf("Belo Horizonte\n");
    else
        printf("DDD nao cadastrado\n");

    return 0;
}