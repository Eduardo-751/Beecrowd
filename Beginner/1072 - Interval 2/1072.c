#include <stdio.h>
 
int main() {
 
    double aux;
    int casos, i, in=0, out=0;
    
    scanf("%i", &casos);
    
    for(i=0; i<casos; i++){
        scanf("%lf", &aux);
        
        if(aux>=10 && aux<=20)
            in++;
        
        else
            out++;
    }
    
    printf("%i in\n", in);
    printf("%i out\n", out);
    
    return 0;
}