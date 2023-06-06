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