/*
Read an integer number between 1 and 12, including. Corresponding to this number, you must print the month of the year, in english, 
with the first letter in uppercase.

Input
The input contains only an integer number.

Output
Print the name of the month according to the input number, with the first letter in uppercase.

Input Sample	Output Sample
4               April
*/
#include <stdio.h>
#include <math.h>

int main(){

    int mes;
    scanf("%i", &mes);
    switch(mes){
        case 1 :
            printf("January\n");
        case 2 :
            printf("February\n");
        case 3 :
            printf("March\n");
        case 4 :
            printf("April\n");
        case 5 :
            printf("May\n");
        case 6 :
            printf("June\n");
        case 7 :
            printf("July\n");
        case 8 :
            printf("August\n");
        case 9 :
            printf("September\n");
        case 10 :
            printf("October\n");
        case 11 :
            printf("November\n");
        case 12 :
            printf("December\n");
    }
    return 0;
}