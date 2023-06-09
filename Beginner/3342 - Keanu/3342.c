#include <stdio.h>

int main() {
    int N, cBranca, cPreta;
    scanf("%i", &N);

    int totalCells = N * N;
    cBranca = totalCells / 2;
    cPreta = totalCells - cBranca;

    printf("%i casas brancas e %i casas pretas", cBranca, cPreta);

    return 0;
}