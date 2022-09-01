#include <stdio.h>
 
int main() {
 
    int i, a, b, soma=0;
    
    scanf("%i %i", &a, &b);
    
    if (a<b){
        for(i=a+1; i<b; i++){
            if(i%2 == 1)
                soma = soma+i;
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    else{
        for(i=b+1; i<a; i++){
            if(i%2 == 1)
                soma = soma+(i);
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    
    printf("%i\n", soma);
    
    return 0;
}