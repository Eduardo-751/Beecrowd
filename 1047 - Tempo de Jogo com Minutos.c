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