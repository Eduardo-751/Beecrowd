#include <stdio.h>

int main()
{
    int A, B;
    scanf("%i %i", &A, &B);
    if (A > B)
        printf("%i\n", A);
    else
        printf("%i\n", B);
    return 0;
}