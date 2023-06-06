#include <stdio.h>
#include <math.h>

int main()
{

    int sec, min, hour;

    scanf("%i", &sec);

    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    printf("%i:%i:%i\n", hour, min, sec);

    return 0;
}