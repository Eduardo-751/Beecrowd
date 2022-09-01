/*
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.

Input
The input file contains an integer value N (0 < N < 1000000).

Output
Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.

Input Sample	Output Sample
576             576
                5 nota(s) de R$ 100,00
                1 nota(s) de R$ 50,00
                1 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                1 nota(s) de R$ 5,00
                0 nota(s) de R$ 2,00
                1 nota(s) de R$ 1,00

11257           11257
                112 nota(s) de R$ 100,00
                1 nota(s) de R$ 50,00
                0 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                1 nota(s) de R$ 5,00
                1 nota(s) de R$ 2,00
                0 nota(s) de R$ 1,00

503             503
                5 nota(s) de R$ 100,00
                0 nota(s) de R$ 50,00
                0 nota(s) de R$ 20,00
                0 nota(s) de R$ 10,00
                0 nota(s) de R$ 5,00
                1 nota(s) de R$ 2,00
                1 nota(s) de R$ 1,00
*/
#include <stdio.h>
#include <math.h>

int main(){

    int valor, a;
    int nota100=0, nota50=0, nota20=0, nota10=0, nota5=0, nota2=0, nota1=0;

    scanf("%i", &valor);
    a = valor;
    while(a>=100){
        a=a-100;
        nota100++;
    }
    while(a>=50){
        nota50++;
        a=a-50;
    }
     while(a>=20){
        nota20++;
        a=a-20;
    }
     while(a>=10){
        nota10++;
        a=a-10;
    }
     while(a>=5){
        nota5++;
        a=a-5;
    }
     while(a>=2){
        nota2++;
        a=a-2;
    }
    while(a>=1){
        nota1++;
        a=a-1;
    }
    printf("%i\n", valor);
    printf("%i nota(s) de R$ 100,00\n", nota100);
    printf("%i nota(s) de R$ 50,00\n", nota50);
    printf("%i nota(s) de R$ 20,00\n", nota20);
    printf("%i nota(s) de R$ 10,00\n", nota10);
    printf("%i nota(s) de R$ 5,00\n", nota5);
    printf("%i nota(s) de R$ 2,00\n", nota2);
    printf("%i nota(s) de R$ 1,00\n", nota1);

    return 0;
}