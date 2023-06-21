#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    scanf("%i", &C);

    for (int i = 0; i < C; i++)
    {
        char string[200];
        scanf("%s", &string);

        int aux = 0;
        int groupA1 = 0, groupA2 = 0;

        for (int i2 = 1; i2 < strlen(string); i2++)
        {
            if (string[i2] == 'a' && aux == 0)
                groupA1++;
            else
                aux = 1;
            if (string[i2] == 'a' && aux == 1)
                groupA2++;
        }
        printf("k");
        for (int i2 = 0; i2 < (groupA1 * groupA2); i2++)
        {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}
