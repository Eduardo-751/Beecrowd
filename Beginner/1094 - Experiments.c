/*
Maria has just started as graduate student in a medical school and she's needing your help to organize a laboratory experiment which she is responsible about. 
She wants to know, at the end of the year, how many animals were used in this laboratory and the percentage of each type of animal is used at all.

This laboratory uses in particular three types of animals: frogs, rats and rabbits. To obtain this information, 
it knows exactly the number of experiments that were performed, the type and quantity of each animal is used in each experiment.

Input
The first line of input contains an integer N indicating the number of test cases that follows. Each test case contains an integer Amount (1 ≤ Amount ≤ 15) 
which represents the amount of animal used and a character Type ('C', 'R' or 'S'), indicating the type of animal:
- C: Coelho (rabbit in portuguese)
- R: Rato (rat  in portuguese)
- S: Sapo (frog in portuguese)

Output
Print the total of animals used, the total of each type of animal and the percentual of each one in relation of the total of animals used. 
The percentual must be printed with 2 digits after the decimal point.

Input Sample	Output Sample
10              Total: 92 cobaias
10 C            Total de coelhos: 29
6 R             Total de ratos: 40
15 S            Total de sapos: 23
5 C             Percentual de coelhos: 31.52 %
14 R            Percentual de ratos: 43.48 %
9 C             Percentual de sapos: 25.00 %
6 R
8 S
5 C
14 R
*/
#include <stdio.h>

int main(){

    char Tipo;
    int Teste, Cobaia, Total=0;
    int Coelho=0, Rato=0, Sapo=0;

    scanf("%i", &Teste);

    while(Teste>0){

        scanf("%i %c", &Cobaia, &Tipo);

        Total += Cobaia;

        switch(Tipo){
            case 'C':{
                Coelho += Cobaia;
                break;
            }
            case 'R':{
                Rato += Cobaia;             
                break;
            }
            case 'S':{
                Sapo += Cobaia;             
                break;
            }
        }
        Teste--;
    }

    printf("Total: %i cobaias\n", Total);
    printf("Total de coelhos: %i\n", Coelho);
    printf("Total de ratos: %i\n", Rato);
    printf("Total de sapos: %i\n", Sapo);
    printf("Percentual de coelhos: %.2f %%\n", (float)(Coelho*100)/Total);
    printf("Percentual de ratos: %.2f %%\n", (float)(Rato*100)/Total);
    printf("Percentual de sapos: %.2f %%\n", (float)(Sapo*100)/Total);

    return 0;
}