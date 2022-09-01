/*
Write a program that reads an array N [20]. After, change the first element by the last, the second element by the last but one, etc.., 
Up to change the 10th to the 11th. print the modified array.

Input
The input contains 20 integer numbers, positive or negative.

Output
For each position of the array N print "N[i] = Y", where i is the array position and Y is the number stored in that position.

Input Sample	Output Sample
0               N[0] = 230
-5              N[1] = 63
...             ...
63              N[18] = -5
230             N[19] = 0
*/
#include <stdio.h>
 
int main() {
 
    int N[20], aux[20], i;
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 20; i++) {
        aux[19 - i] = N[i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, aux[i]);
    }
    return 0;
}