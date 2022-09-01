/*
Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).

Input
The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.

Output
Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".

Input Sample	Output Sample
500             14.286 km/l
35.0

2254            18.119 km/l
124.4

4554            9.802 km/l
464.6
*/
#include <stdio.h>
#include <math.h>

int main(){

    int x;
    double y;
    scanf("%i %lf", &x, &y);
    printf("%.3lf km/l\n", x/y);
    return 0;
}