#include <stdio.h>

int main()
{

    int P1, C1, P2, C2;

    scanf("%i %i %i %i", &P1, &C1, &P2, &C2);

    if (P1 * C1 == P2 * C2)
        printf("0\n");
    else if (P1 * C1 < P2 * C2)
        printf("1\n");
    else
        printf("-1\n");

    return 0;
}