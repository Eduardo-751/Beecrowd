#include <stdio.h>

int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        int s = v * (2 * t);
        printf("%d\n", s);
    }
    return 0;
}