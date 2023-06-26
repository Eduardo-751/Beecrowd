#include <stdio.h>

int main()
{

    int C, P, F;

    scanf("%i %i %i", &C, &P, &F);

    if (C * F <= P)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}