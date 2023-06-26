#include <stdio.h>

int main()
{
    int N, T, V, dist=0;
    scanf("%i", &N);
    for(int i=0; i<N; i++){
        scanf("%i %i", &T, &V);
        dist += T*V;
    }
    printf("%i\n", dist);
    return 0;
}