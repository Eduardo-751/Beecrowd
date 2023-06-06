#include <stdio.h>
#include <math.h>

int main(){

    int Vec[3], VecOrdenado[3], aux, i1, i2;

    for(i1=0; i1<3; i1++){
        scanf("%i", &Vec[i1]);
        VecOrdenado[i1]=Vec[i1];
    }
    for (i1=1; i1<3; i1++){
        for (i2=0; i2<3-1; i2++){
            if (VecOrdenado[i2] > VecOrdenado[i2+1]) {
                aux = VecOrdenado[i2];
                VecOrdenado[i2] = VecOrdenado[i2+1];
                VecOrdenado[i2+1] = aux;
            }
        }
    }
    for(i1=0; i1<3; i1++)
        printf("%i\n", VecOrdenado[i1]);

    printf("\n");
    for(i1=0; i1<3; i1++)
        printf("%i\n", Vec[i1]);

    return 0;
}