/*
In this problem, your job is to read three Portuguese words. These words define an animal according to the table below, from left to right. 
After, print the chosen animal defined by these three words.

https://www.beecrowd.com.br/judge/en/problems/view/1049

Input
The input contains 3 words, one by line, that will be used to identify the animal, according to the above table, with all letters in lowercase.

Output
Print the animal name according to the given input.

Input Samples	    Output Samples
vertebrado          homem
mamifero    
onivoro

vertebrado          aguia
ave
carnivoro

invertebrado        minhoca
anelideo
onivoro
*/
#include <string.h>
#include <stdio.h>

int main()
{
    char group[3][20];

    for (int i = 0; i < 3; ++i) {
        scanf("%s\n", &group[i]);
    }

    if (strcmp(group[0], "vertebrado") == 0) {
        if (strcmp(group[1], "ave") == 0) {
            if (strcmp(group[2], "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(group[1], "mamifero") == 0) {
            if (strcmp(group[2], "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(group[0], "invertebrado") == 0) {
        if (strcmp(group[1], "inseto") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(group[1], "anelideo") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("minhoca\n");
        }
    }
    return 0;
}