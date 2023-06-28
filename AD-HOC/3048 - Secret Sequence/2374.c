#include <stdio.h>
 
int main() {
 
    int N, V,sequence = 0, aux = 0;

    scanf("%i", &N);
    for(int i=0; i<N; i++){
        scanf("%i", &V);
        if(V!=aux){
            aux = V;
            sequence++;
        }
    }
    
    printf("%i\n", sequence);
    return 0;
}