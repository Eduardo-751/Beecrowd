#include <stdio.h>

int main()
{
    int table[5] = {300, 1500, 600, 1000, 150};
    int gramas = 225;

    for(int i = 0; i<5; i++){
        int aux;
        scanf("%i", &aux);
        gramas += table[i]*aux;
    }
    printf("%i\n", gramas);
    return 0;
}