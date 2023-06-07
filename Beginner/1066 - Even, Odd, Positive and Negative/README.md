1066 - Pares, Ímpares, Positivos e Negativos
============================================

Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

Entrada
-------

O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
-----

Imprima a mensagem conforme o exemplo fornecido, uma mensagem por linha, não esquecendo o final de linha após cada uma.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -5 <br/> 0 <br/> -3 <br/> -4 <br/> 12 <br/> 12 | 3 valor(es) par(es) <br/> 2 valor(es) impar(es) <br/> 1 valor(es) positivo(s) <br/> 3 valor(es) negativo(s) |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int i, a=0, b=0, c=0, d=0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
        else
            b++;
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            d++;
    }
    printf("%i valor(es) par(es)\n", a);
    printf("%i valor(es) impar(es)\n", b);
    printf("%i valor(es) positivo(s)\n", c);
    printf("%i valor(es) negativo(s)\n", d);
    return 0;
}
```
