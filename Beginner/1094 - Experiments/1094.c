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