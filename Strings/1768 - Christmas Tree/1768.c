#include <stdio.h>

int main()
{
    int i, a, b, c, d = 0;

    while (scanf("%i", &i) != EOF)
    {
        d = 0;
        for (a = 1; a <= i; a = a + 2)
        {
            for (c = i / 2 - d; c > 0; c--)
                printf(" ");

            for (b = 1; b <= a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        d = 0;
        for (a = 1; a <= 3; a = a + 2)
        {
            for (c = i / 2 - d; c > 0; c--)
                printf(" ");

            for (b = 1; b <= a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        printf("\n");
    }
    return 0;
}
