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