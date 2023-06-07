1038 - Lanche
=============

Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1038_pt.png)

Entrada
-------

O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
-----

O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 3 2                 | Total: R$ 10.00   |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 4 3                 | Total: R$ 6.00    |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 2 3                 | Total: R$ 13.50   |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>


int main(){

    int A, B;
    float valor;

    scanf("%i %i", &A, &B);
    switch(A){
        case 1:
            valor = B * 4.0;
            break;
        case 2:
            valor = B * 4.5;
            break;
        case 3:
            valor = B * 5.0;
            break;
        case 4:
            valor = B * 2.0;
            break;
        case 5:
            valor = B * 1.5;
            break;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
```
