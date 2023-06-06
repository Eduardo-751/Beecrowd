#include <stdio.h>
 
int main() {
 
    int N, i;
    scanf("%d", &N);
    for(i=0; i<1000; i++) {
        printf("N[%d] = %d\n", i, i % N);
    }
    return 0;
}