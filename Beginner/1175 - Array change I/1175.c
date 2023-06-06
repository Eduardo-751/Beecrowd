#include <stdio.h>
 
int main() {
 
    int N[20], aux[20], i;
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 20; i++) {
        aux[19 - i] = N[i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, aux[i]);
    }
    return 0;
}