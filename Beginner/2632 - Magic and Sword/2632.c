#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int fire[4] = {0, 20, 30, 50};
    int water[4] = {0, 10, 25, 40};
    int earth[4] = {0, 25, 55, 70};
    int air[4] = {0, 18, 38, 60};

    int T;
    scanf("%i", &T);
    while (T--)
    {
        int w, h, x0, y0, N, Cx, Cy, Px, Py;
        char magic[6];

        scanf("%i %i %i %i", &w, &h, &x0, &y0);
        scanf("%s %i %i %i", magic, &N, &Cx, &Cy);

        if (Cx < x0)
            Px = x0;
        else if (Cx > x0 + w)
            Px = x0 + w;
        else
            Px = Cx;

        if (Cy < y0)
            Py = y0;
        else if (Cy > y0 + h)
            Py = y0 + h;
        else
            Py = Cy;

        double dist = sqrt(pow(Cx - Px, 2) + pow(Cy - Py, 2));
        int damage = 0;
        if (strcmp(magic, "fire") == 0)
            if (dist <= fire[N])
                damage = 200;
        if (strcmp(magic, "water") == 0)
            if (dist <= water[N])
                damage = 300;
        if (strcmp(magic, "earth") == 0)
            if (dist <= earth[N])
                damage = 400;
        if (strcmp(magic, "air") == 0)
            if (dist <= air[N])
                damage = 100;
        printf("%d\n", damage);
    }
    return 0;
}