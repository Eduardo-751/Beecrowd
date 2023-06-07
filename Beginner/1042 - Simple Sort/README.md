1042 - Sort Simples
===================

Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
-------

A entrada contem três números inteiros.

Saída
-----

Imprima a saída conforme foi especificado.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7 21 -14            | -14 <br/> 7 <br/> 21 <br/><br/> 7 <br/> 21 <br/> -14 |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -14 21 7            | -14 <br/> 7 <br/> 21 <br/><br/> -14 <br/> 21 <br/> 7 |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int Vec[3], VecOrdenado[3], aux, i1, i2;

    for(i1=0; i1<3; i1++){
        scanf("%i", &Vec[i1]);
        VecOrdenado[i1]=Vec[i1];
    }
    for (i1=1; i1<3; i1++){
        for (i2=0; i2<3-1; i2++){
            if (VecOrdenado[i2] > VecOrdenado[i2+1]) {
                aux = VecOrdenado[i2];
                VecOrdenado[i2] = VecOrdenado[i2+1];
                VecOrdenado[i2+1] = aux;
            }
        }
    }
    for(i1=0; i1<3; i1++)
        printf("%i\n", VecOrdenado[i1]);

    printf("\n");
    for(i1=0; i1<3; i1++)
        printf("%i\n", Vec[i1]);

    return 0;
}
```
