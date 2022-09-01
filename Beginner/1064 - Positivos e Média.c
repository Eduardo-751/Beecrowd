#include <stdio.h>
 
int main() {
 
    double aux, media=0;
    int pos=0, i;
    
    for(i=0; i<6; i++){
        scanf("%lf", &aux);
        
        if(aux>0){
            media = media+aux;
            pos++;
        }
    }
    
    media = media/pos;
    
    printf("%i valores positivos\n", pos);
    printf("%.1lf\n", media);
    
    return 0;
}