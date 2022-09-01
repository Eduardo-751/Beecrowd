/*
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. 
This is a very simple program with the only intention of practice of selection commands.

https://www.beecrowd.com.br/judge/en/problems/view/1038

Input
The input file contains two integer numbers X and Y. X is the product code and Y is the quantity of this item according to the above table.

Output
The output must be a message "Total: R$ " followed by the total value to be paid, with 2 digits after the decimal point.

Input Sample	Output Sample
3 2             Total: R$ 10.00

4 3             Total: R$ 6.00

2 3             Total: R$ 13.50
*/
#include <stdio.h>
#include <math.h>


int main(){

    int A, B;
    float valor;

    scanf("%i %i", &A, &B);

    if(A==1){
        valor = B * 4.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==2){
        valor = B * 4.5;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==3){
        valor = B * 5.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else if(A==4){
        valor = B * 2.0;
        printf("Total: R$ %.2lf\n", valor);
    }
    else{
        valor = B * 1.5;
        printf("Total: R$ %.2lf\n", valor);
    }

    return 0;
}