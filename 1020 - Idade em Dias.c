#include <stdio.h>
#include <math.h>

int main(){

    int dias, anos=0, meses=0;

    scanf("%i", &dias);

    while(dias>=365){
        dias=dias-365;
        anos++;
    }
    while(dias>=30){
        dias=dias-30;
        meses++;
    }

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}
