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