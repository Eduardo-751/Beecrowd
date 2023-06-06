#include <stdio.h>

int main(){

    int cases, count, PA, PB;
    int i, i2;
    float G1, G2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        count=0;
        scanf("%i %i %f %f", &PA, &PB, &G1, &G2);
        float G1aux = (G1/100 + 1);
        for(i2=PA; i2<=PB; i2*=G1aux) {
            PB*=((G2/100 ) +1);
            count++;
            if(count > 100)
                break;
        }
        if(count > 100)
            printf("Mais de 1 seculo.\n");
        else
        printf("%i anos.\n", count);
    }

    return 0;
}