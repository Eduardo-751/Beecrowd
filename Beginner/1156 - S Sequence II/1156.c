#include <stdio.h>

int main() {

    float Sum=0, i, i2=1;
    for(i=1; i<=39; i+=2){
        Sum+=i/i2;
        i2*=2;
    }
    printf("%.2f\n", Sum);
    return 0;
}