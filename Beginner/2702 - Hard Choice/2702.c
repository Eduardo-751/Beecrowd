#include <stdio.h>
 
int main() {
 
    int Ca, Ba, Pa, Cr, Br, Pr;

    scanf("%i %i %i", &Ca, &Ba, &Pa);
    scanf("%i %i %i", &Cr, &Br, &Pr);

    int C = Cr-Ca;
    int B = Br-Ba;
    int P = Pr-Pa;

    int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

    printf("%i\n", R);

    return 0;
}