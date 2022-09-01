/*
Read the start time and end time of a game, in hours. Then calculate the duration of the game, 
knowing that the game can begin in a day and finish in another day, with a maximum duration of 24 hours. 
The message must be printed in portuguese “O JOGO DUROU X HORA(S)” that means “THE GAME LASTED X HOUR(S)”

Input
Two integer numbers representing the start and end time of a game.

Output
Print the duration of the game as in the sample output.

Input Sample	Output Sample
16 2            O JOGO DUROU 10 HORA(S)

0 0             O JOGO DUROU 24 HORA(S)

2 16            O JOGO DUROU 14 HORA(S)
*/
#include <stdio.h>
#include <math.h>

int main(){

    int A, B;
    scanf("%i %i", &A, &B);
    if(A>=B)
        B+=24;

    printf("O JOGO DUROU %i HORA(S)\n", B-A);

    return 0;
}