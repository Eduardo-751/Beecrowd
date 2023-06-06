#include <stdio.h>

int main(){

    int X, Y, Sum;
    scanf("%i", &X);
    while(X != 0){
        Sum=0;
        Y=5;
        do {
            if(X%2 == 0) {
                Sum+=X;
                Y--;
            }
            X++;
        }while(Y>0);
        printf("%i\n", Sum);
        scanf("%i", &X);
    }
    return 0;
}