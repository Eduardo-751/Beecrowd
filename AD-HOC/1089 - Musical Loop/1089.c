#include <stdio.h>

int main()
{
    int T = 1, i, t1, t2, ondas = 0, V[10000];
    while (T != 0)
    {
        scanf("%i", &T);
        if (T != 0)
        {
            for (i = 0; i < T; i++)
                scanf("%i", &V[i]);
            V[T] = V[0];
            V[T + 1] = V[1];
            for (i = 1; i < T + 1; i++)
            {
                t1 = i + 1;
                t2 = i - 1;
                if (V[i] > V[t1] && V[i] > V[t2])
                    ondas++;
                if (V[i] < V[t1] && V[i] < V[t2])
                    ondas++;
            }
            printf("%i\n", ondas);
            ondas = 0;
        }
    }
    return 0;
}