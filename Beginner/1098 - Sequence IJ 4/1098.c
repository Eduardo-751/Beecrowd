#include <stdio.h>
#include <math.h>
int main() {
    float i, j;
    for(i=0; i<2.1; i=i+0.2) {
        j=i+1;
        if(i==0 || i==1 || i>1.9) {
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}