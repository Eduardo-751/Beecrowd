#include <stdio.h>

int main()
{
    int N, F1, F2, MDC;
    (scanf("%i", &N) > 0);
    while (N > 0)
    {
        scanf("%i %i", &F1, &F2);
        do
        {
            MDC = F1 % F2;
            F1 = F2;
            F2 = MDC;
        } while (MDC != 0);
        printf("%i\n", F1);
        N--;
    }
    return 0;
}