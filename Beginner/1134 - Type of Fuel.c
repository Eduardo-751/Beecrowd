/*
A gas station wants to determine which of their products is the preference of their customers. Write a program to read the type of fuel supplied 
(coded as follows: 1. Alcohol 2. Gasoline 3. Diesel 4. End). If you enter an invalid code (outside the range of 1 to 4) a new code must be requested. 
The program will end when the inserted code is the number 4.

Input
The input contains only integer and positive values.

Output
It should be written the message: "MUITO OBRIGADO" and the amount of customers who fueled each fuel type, as an example.

Input Sample	Output Sample
8               MUITO OBRIGADO
1               Alcool: 1
7               Gasolina: 2
2               Diesel: 0
2
4
*/
#include <stdio.h>

int main()
{
    int n1, a=0, g=0, d=0;
    do {
        scanf("%i", &n1);
        if(n1!=4) {
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