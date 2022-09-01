/*
Read the start time and end time of a game, in hours and minutes (initial hour, initial minute, final hour, final minute). Then print the duration of the game, knowing that the game can begin in a day and finish in another day,

Obs.: With a maximum game time of 24 hours and the minimum game time of 1 minute.

Input
Four integer numbers representing the start and end time of the game.

Output
Print the duration of the game in hours and minutes, in this format: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game lasted XXX hour(s) and YYY minutes.

Input Sample	Output Sample
7 8 9 10        O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)

7 7 7 7         O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)

7 10 8 9        O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/
#include <stdio.h>

int main(){

    int hora1, min1, hora2, min2;
    scanf("%i %i %i %i", &hora1, &min1, &hora2, &min2);

    if(hora2<=hora1 && min2<=min1)
        hora2+=24;
    if(min2<min1){
        min2+=60;
        hora1++;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora2-hora1, min2-min1);

    return 0;
}