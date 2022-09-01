/*
Read a value of floating point with two decimal places. This represents a monetary value. After this, 
calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. 
The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. 
Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.

Input
The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).

Output
Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.

Input Sample	Output Sample
576.73          NOTAS:
                5 nota(s) de R$ 100.00
                1 nota(s) de R$ 50.00
                1 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                1 nota(s) de R$ 5.00
                0 nota(s) de R$ 2.00
                MOEDAS:
                1 moeda(s) de R$ 1.00
                1 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                2 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                3 moeda(s) de R$ 0.01

4.00            NOTAS:
                0 nota(s) de R$ 100.00
                0 nota(s) de R$ 50.00
                0 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                0 nota(s) de R$ 5.00
                2 nota(s) de R$ 2.00
                MOEDAS:
                0 moeda(s) de R$ 1.00
                0 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                0 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                0 moeda(s) de R$ 0.01

91.01           NOTAS:
                0 nota(s) de R$ 100.00
                1 nota(s) de R$ 50.00
                2 nota(s) de R$ 20.00
                0 nota(s) de R$ 10.00
                0 nota(s) de R$ 5.00
                0 nota(s) de R$ 2.00
                MOEDAS:
                1 moeda(s) de R$ 1.00
                0 moeda(s) de R$ 0.50
                0 moeda(s) de R$ 0.25
                0 moeda(s) de R$ 0.10
                0 moeda(s) de R$ 0.05
                1 moeda(s) de R$ 0.01
*/
#include <stdio.h>
#include <math.h>

int main(){

    double Valor, a;
    int nota=0, moedas=0;

    scanf("%lf", &Valor);
    a = Valor;
        printf("NOTAS:\n");
        while(a>=100){
            a=a-100;
            nota++;
        }
        printf("%i nota(s) de R$ 100.00\n", nota);
        nota = 0;
        while(a>=50){
            a=a-50;
            nota++;
        }
        printf("%i nota(s) de R$ 50.00\n", nota);
        nota = 0;
        while(a>=20){
            a=a-20;
            nota++;
        }
        printf("%i nota(s) de R$ 20.00\n", nota);
        nota = 0;
        while(a>=10){
            a=a-10;
            nota++;
        }
        printf("%i nota(s) de R$ 10.00\n", nota);
        nota = 0;
        while(a>=5){
            a=a-5;
            nota++;
        }
        printf("%i nota(s) de R$ 5.00\n", nota);
        nota = 0;
        while(a>=2){
            a=a-2;
            nota++;
        }
        printf("%i nota(s) de R$ 2.00\n", nota);
        printf("MOEDAS:\n");
        while(a>=1){
            a=a-1;
            moedas++;
        }
        printf("%i moeda(s) de R$ 1.00\n", moedas);
        moedas=0;
        while(a>=0.5){
            a=a-0.5;
            moedas++;
        }
        printf("%i moeda(s) de R$ 0.50\n", moedas);
        moedas=0;
        while(a>=0.25){
            a=a-0.25;
            moedas++;
        }
        printf("%i moeda(s) de R$ 0.25\n", moedas);
        moedas=0;
        while(a>=0.10){
            a=a-0.10;
            moedas++;
        }
        printf("%i moeda(s) de R$ 0.10\n", moedas);
        moedas=0;
        while(a>=0.05){
            a=a-0.05;
            moedas++;
        }
        printf("%i moeda(s) de R$ 0.05\n", moedas);
        moedas=0;
        while(a>=0.009){
            a=a-0.01;
            moedas++;
        }
        printf("%i moeda(s) de R$ 0.01\n", moedas);
    return 0;
}