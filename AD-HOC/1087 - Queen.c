/*
The game of Chess has several pieces with curious movements. One of them is the Queen, which can move any number of squares in any direction: 
in the same line, in the same column or in any of the diagonals

The great Chess Master Kary Gasparov invented a new type of chess problem: 
given the position of a queen in an empty standard chess board (that is, an 8 x 8 board) how many moves are needed so that she reaches another given square in the board?

Kary found the solution for some of those problems, but is having a difficult time to solve some others, 
and therefore he has asked that you write a program to solve this type of problem.

Input
The input contains several test cases. The only line of each test case contains four integers X1, Y1, X2 and Y2 (1 ≤ X1, Y1, X2, Y2 ≤ 8). 
The queen starts in the square with coordinates (X1, Y1), and must finish at the square with coordinates (X2, Y2). In the chessboard, 
columns are numbered from 1 to 8, from left ro right; lines are also numbered from 1 to 8, from top to bottom. 
The coordinates of a square in line X and column Y are (X, Y).

The end of input is indicated by a line containing four zeros, separated by spaces.

Output
For each test case in the input your program must print a single line, containing an integer, 
indicating the smallest number of moves needed for the queen to reach the new position.

Input Sample	Output Sample
4 4 6 2         1
3 5 3 5         0
5 5 4 3         2
0 0 0 0
*/
#include <stdio.h>

int main() {
    int x1, x2, y1, y2, n=2, dx, dy;
    do {
        scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
        if(x1!=0 && x2!=0 && y1!=0 && y2!=0) {
            dx=x2-x1;
            dy=y2-y1;
            if(dx<0)
                dx=dx*(-1);
            if(dy<0)
                dy=dy*(-1);
            n=2;
            if(x1==x2 && y1==y2)
                n=0;
            else if(x1==x2 || y1==y2 || dy==dx)
                n=1;
            printf("%i\n", n);
        }
    }
    while(x1!=0 && x2!=0 && y1!=0 && y2!=0);
    return 0;
}
