#include <stdio.h>

int main(){

    int cases, X, Y, Sum=0, i, i2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        Sum=0;
        scanf("%i %i", &X, &Y);
        for(i2=X; Y>0 ; i2++){
            if(i2%2 == 1 || i2%2 == -1){
                Sum+=i2;
                Y--;
            }
        }
        printf("%i\n", Sum);
    }
    return 0;
}