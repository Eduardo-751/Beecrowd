#include <stdio.h>

int main()
{

    int C, N;
    scanf("%i", &C);
    while (C--)
    {
        scanf("%i", &N);
        if (N % 2 == 0)
            printf("%i\n", 0);
        else
            printf("%i\n", 1);
    }
    return 0;
}