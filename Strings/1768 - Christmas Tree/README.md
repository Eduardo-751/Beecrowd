1768 - Árvore de Natal
======================

As crianças adoram desenhar árvores de natal e você desafiou algumas delas a desenharem árvores de diversos tamanhos com apenas com o caractere asterisco "\*".

A regra é simples. De baixo para cima, o tronco da árvore consiste de 3 asteriscos e depois 1. Em seguida vem o restante da árvore, com cada fileira de folhas iniciando no tamanho que você determinou e diminuindo de dois em dois, até chegar na copa da árvore que terá apenas um asterisco. Note que para isso dar certo, somente será permitido tamanhos ímpares para estas árvores.

Entrada
-------

A entrada contém vários casos de teste e termina com **EOF**. Cada caso de teste consiste em um inteiro **N** (2 < **N** < 100).

Saída
-----

Para cada caso de teste de entrada, seu programa deverá desenhar uma árvore conforme especificação acima e exemplo abaixo, com uma linha em branco após cada árvore.


&nbsp;
| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 9 | * <br/> *** <br/> ***** <br/> ******* <br/>n********* <br/>  *  <br/> *** |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 5 | * <br/> *** <br/> ***** <br/> * <br/> *** |

&nbsp;


### C99

```c
#include <stdio.h>

int main()
{
    int i, a, b, c, d=0;

    while(scanf("%i", &i)!=EOF) {
        d = 0;
        for(a=1; a<=i; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        d=0;
        for(a=1; a<=3; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        printf("\n");
    }
    return 0;
}
```
