#include <stdio.h>

int main()
{
    int n1, a=0, g=0, d=0;
    do
    {
        scanf("%i", &n1);
        if(n1!=4)
        {
            switch (n1)
            {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;

            }
        }
    }
    while(n1!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", a);
    printf("Gasolina: %i\n", g);
    printf("Diesel: %i\n", d);
    return 0;
}