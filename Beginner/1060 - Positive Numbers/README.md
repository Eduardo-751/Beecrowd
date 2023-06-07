1060 - Números Positivos
========================

Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

Entrada
-------

Seis valores, negativos e/ou positivos.

Saída
-----

Imprima uma mensagem dizendo quantos valores positivos foram lidos.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7 <br/> -5  6  <br/> -3.4 <br/> 4.6 <br/> 12 | 4 valores positivos |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    double A[6];

    for(i=0; i<6; i++){
        scanf("%lf", &A[i]);
        if(A[i]>0)
            a++;
    }
    printf("%i valores positivos\n", a);
    return 0;
}
```
