#include <stdio.h>

int main()
{

    int i, i2, N, odd = 0, even = 0;
    int oddV[5], EvenV[5];

    for (i = 0; i < 15; i++)
    {
        scanf("%i", &N);
        if (N % 2 == 0)
        {
            EvenV[even] = N;
            even++;
            if (even == 5)
            {
                for (i2 = 0; i2 < even; i2++)
                {
                    printf("par[%i] = %i\n", i2, EvenV[i2]);
                }
                even = 0;
            }
        }
        else
        {
            oddV[odd] = N;
            odd++;
            if (odd == 5)
            {
                for (i2 = 0; i2 < odd; i2++)
                {
                    printf("impar[%i] = %i\n", i2, oddV[i2]);
                }
                odd = 0;
            }
        }
    }
    for (i2 = 0; i2 < odd; i2++)
    {
        printf("impar[%i] = %i\n", i2, oddV[i2]);
    }
    for (i2 = 0; i2 < even; i2++)
    {
        printf("par[%i] = %i\n", i2, EvenV[i2]);
    }
    return 0;
}