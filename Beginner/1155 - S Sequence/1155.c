#include <stdio.h>

int main() {
    float Sum=0, i;
    for(i=1; i<=100; i++){
        Sum+=1/i;
    }
    printf("%.2f\n", Sum);
    return 0;
}