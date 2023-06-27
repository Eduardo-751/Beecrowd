#include <stdio.h>

int main()
{

    int T, A, B, C, D, E, R = 0;

    scanf("%i", &T);
    scanf("%i %i %i %i %i", &A, &B, &C, &D, &E);

    if (A == T) R++;
    if (B == T) R++;
    if (C == T) R++;
    if (D == T) R++;
    if (E == T) R++;

    printf("%i\n", R);

    return 0;
}