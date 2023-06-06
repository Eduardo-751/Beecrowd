#include <stdio.h>

int main(){

    int a, i;
    
    scanf("%i", &a);
    for(i=a; i<=a+11; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }
    
    return 0;
}