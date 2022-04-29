#include <stdio.h>
#include <math.h>

int main(){

    int sec, min=0, hour=0;

    scanf("%i", &sec);

    while(sec>=3600){
        sec=sec-3600;
        hour++;
    }
    while(sec>=60){
        sec=sec-60;
        min++;
    }

    printf("%i:%i:%i\n", hour, min, sec);

    return 0;
}