#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if ((a + b + abs(a - b)) / 2 > c)
        printf("%i eh o maior\n", (a + b + abs(a - b)) / 2);
    else
        printf("%i eh o maior\n", c);
    return 0;
}