/*
Children do love draw christmas trees and you challenged some of them to draw trees of many sizes just with the asterisk "*" char.

The rule is simple: from bottom to top, the trunk of the tree consists of one line with three asterisks and one line with one asterisk. 
Then comes the rest of the tree, with each row starting with the size ordered by you and decreasing every two caracter, 
until you reach the top of the tree that have just one asterisk. Note that for this to work, will only be allowed odd sizes to the trees.

Input
The input contains many test cases and ends with EOF. Each test case consist of an integer number N (2 < N < 100).

Output
For each test case, print a tree as specified above and as the example below, with a blank line after each tree.

Input Sample	Output Sample
9                   *
                   ***
                  *****
                 *******
                *********
                    *  
                   ***

5                   *
                   ***
                  *****
                    *
                   ***
*/
#include <stdio.h>

int main()
{
    int i, a, b, c, d=0;

    while(scanf("%i", &i)!=EOF) {
        d = 0;
        for(a=1; a<=i; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");
                
            printf("\n");
            d++;
        }
        d=0;
        for(a=1; a<=3; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");
                
            printf("\n");
            d++;
        }
        printf("\n");
    }
    return 0;
}
