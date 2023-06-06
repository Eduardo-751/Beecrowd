#include <stdio.h>

int main()
{

    int N, X, Sum;
    int i, i2;

    scanf("%i", &N);
    for (i = 0; i < N; i++)
    {
        Sum = 0;
        scanf("%i", &X);
        for (i2 = 1; i2 < X; i2++)
        {
            if (X % i2 == 0)
                Sum += i2;
        }
        if (Sum == X)
            printf("%i eh perfeito\n", X);
        else
            printf("%i nao eh perfeito\n", X);
    }
    return 0;
}