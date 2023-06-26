#include <stdio.h>

int main()
{
    int N, i, d = 1;
    char O[10000];

    do
    {
        d = 1;
        scanf("%i", &N);
        if (N > 0)
        {
            for (i = 0; i <= N; i++)
            {
                scanf("%c", &O[i]);
                if (O[i] == 'D')
                {
                    d++;
                    if (d > 4)
                        d = 1;
                }
                if (O[i] == 'E')
                {
                    d--;
                    if (d < 1)
                        d = 4;
                }
            }
            if (d == 1)
                printf("N\n");
            if (d == 4)
                printf("O\n");
            if (d == 2)
                printf("L\n");
            if (d == 3)
                printf("S\n");
        }
    } while (N != 0);
    return 0;
}
