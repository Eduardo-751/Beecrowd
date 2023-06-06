#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, n = 2, dx, dy;
    do
    {
        scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
        if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
        {
            dx = x2 - x1;
            dy = y2 - y1;
            if (dx < 0)
                dx = dx * (-1);
            if (dy < 0)
                dy = dy * (-1);
            n = 2;
            if (x1 == x2 && y1 == y2)
                n = 0;
            else if (x1 == x2 || y1 == y2 || dy == dx)
                n = 1;
            printf("%i\n", n);
        }
    } while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);
    return 0;
}
