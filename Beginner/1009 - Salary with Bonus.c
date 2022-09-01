/*
Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.

- Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.

- Don’t forget the blank spaces.

Input
The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.

Output
Print the seller's total salary, according to the given example.

Input Samples	Output Samples
JOAO            TOTAL = R$ 684.54
500.00
1230.30

PEDRO           TOTAL = R$ 700.00
700.00
0.00

MANGOJATA       TOTAL = R$ 1884.58
1700.00
1230.50
*/
#include <stdio.h>

int main(){

    char nome[15];
    double A, B, salario;
    scanf("%s", nome);
    scanf("%lf %lf", &A, &B);
    salario = A+(B*0.15);
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}
