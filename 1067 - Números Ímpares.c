#include <stdio.h>

int main(){

    int a, i;
    scanf("%i", &a);
    
    for(i=1; i<=a; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }
    
    return 0;
}
