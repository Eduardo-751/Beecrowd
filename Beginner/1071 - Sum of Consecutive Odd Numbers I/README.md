1071 - Soma de Impares Consecutivos I
=====================================

Leia 2 valores inteiros **X** e **Y**. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada
-------

O arquivo de entrada contém dois valores inteiros.

Saída
-----

O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 6 <br/> -5          | 5                 |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 15 <br/> 12         | 13                |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 12 <br/> 12         | 0                 |

&nbsp;

### C99

```c
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
```
