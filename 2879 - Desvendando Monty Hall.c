#include <stdio.h>
#include <math.h>


int main(){

    int num, A=0, B=0, i;
    scanf("%i", &num);

    int testes[num];

    for(i=0; i<num; i++){
        scanf("%i", &testes[i]);
    }
    for(i=0; i<num; i++){
        if(testes[i]==1)
            A++;
        else
            B++;
    }
    printf("%i\n", B);

    return 0;
}