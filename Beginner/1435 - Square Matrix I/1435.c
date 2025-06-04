#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int R = X[0];
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < R) {
            R = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", R);
    printf("Posicao: %d\n", pos);

    return 0;
}