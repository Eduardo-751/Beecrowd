1050 - DDD
==========

Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1050.png)

Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:  
DDD nao cadastrado

Entrada
-------

A entrada consiste de um único valor inteiro.

Saída
-----

Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima _DDD nao cadastrado_ caso não existir DDD correspondente ao número digitado.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 11                  | Sao Paulo         |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int DDD;
    scanf("%i", &DDD);

    if(DDD == 61)
        printf("Brasilia\n");
    else if(DDD == 71)
        printf("Salvador\n");
    else if(DDD == 11)
        printf("Sao Paulo\n");
    else if(DDD == 21)
        printf("Rio de Janeiro\n");
    else if(DDD == 32)
        printf("Juiz de Fora\n");
    else if(DDD == 19)
        printf("Campinas\n");
    else if(DDD == 27)
        printf("Vitoria\n");
    else if(DDD == 31)
        printf("Belo Horizonte\n");
    else
        printf("DDD nao cadastrado\n");

    return 0;
}
```
