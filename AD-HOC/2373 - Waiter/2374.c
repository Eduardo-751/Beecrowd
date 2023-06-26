#include <stdio.h>

int main()
{

    int N, L, C, broken = 0;
    ;

    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%i %i", &L, &C);
        if (C < L)
            broken += C;
    }

    printf("%i\n", broken);

    return 0;
}