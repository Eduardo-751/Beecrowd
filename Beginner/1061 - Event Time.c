/*
Peter is organizing an event in his University. The event will be in April month, beginning and finishing within April month. 
The problem is: Peter wants to calculate the event duration in seconds, knowing obviously the begin and the end time of the event.

You know that the event can take from few seconds to some days, so, you must help Peter to compute the total time corresponding to duration of the event.

Input
The first line of the input contains information about the beginning day of the event in the format: “Dia xx”. 
The next line contains the start time of the event in the format presented in the sample input. Follow 2 input lines with same format, corresponding to the end of the event.

Output
Your program must print the following output, one information by line, considering that if any information is null for example, 
the number 0 must be printed in place of W, X, Y or Z:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Consider that the event of the test case have the minimum duration of one minute. 
“dia” means day, “hora” means hour, “minuto” means minute and “Segundo” means second in Portuguese.

Input Sample	    Output Sample
Dia 5               3 dia(s)
08 : 12 : 23        22 hora(s)
Dia 9               1 minuto(s)
06 : 13 : 23        0 segundo(s)
*/
#include <stdio.h>

int converte(int day, int hour, int min, int sec) {
    return (24 * 60 * 60 * day) + (60 * 60 * hour) + (60 * min) + sec;
}

int main() {
    int d1, h1, m1, s1, d2, h2, m2, s2;
    scanf("Dia %d\n", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d\n", &d2);
    scanf("%d : %d : %d\n", &h2, &m2, &s2);

    int secTotal = converte(d2, h2, m2, s2) - converte(d1, h1, m1, s1);

    printf("%d dia(s)\n", secTotal / (24 * 60 * 60));
    secTotal %= 24 * 60 * 60;
    printf("%d hora(s)\n", secTotal / (60 * 60));
    secTotal %= 60 * 60;
    printf("%d minuto(s)\n", secTotal / 60);
    secTotal %= 60;
    printf("%d segundo(s)\n", secTotal);

    return 0;
}