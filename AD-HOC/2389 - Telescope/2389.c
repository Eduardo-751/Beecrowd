#include <stdio.h>

int main()
{

    int A, N, F, views = 0;

    scanf("%i", &A);
    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &F);
        if (F * A >= 40000000)
            views++;
    }

    printf("%i\n", views);
    return 0;
}