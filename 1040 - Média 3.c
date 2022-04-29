#include <stdio.h>
#include <math.h>


int main(){

    double m1, m2, m3, m4, med1, med2, medfinal;
    scanf("%lf %lf %lf %lf", &m1, &m2, &m3, &m4);
    med1 =(m1*0.2)+(m2*0.3)+(m3*0.4)+(m4*0.1);
    printf("Media: %.1lf\n", med1);
    if(med1>=7){
        printf("Aluno aprovado.\n");
    }
    else if(med1>=5 && med1<7){
        printf("Aluno em exame.\n");
        scanf("%lf", &med2);
        printf("Nota do exame: %.1lf\n", med2);
        medfinal = (med1+med2)/2;
        if(medfinal >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medfinal);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}