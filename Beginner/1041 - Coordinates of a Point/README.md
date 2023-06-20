1041 - Coordenadas de um Ponto
==============================

Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano. A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou na origem (x = y = 0).

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1041.png)

Se o ponto estiver na origem, escreva a mensagem “Origem”.

Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”, conforme for a situação.

Entrada
-------

A entrada contem as coordenadas de um ponto.

Saída
-----

A saída deve apresentar o quadrante em que o ponto se encontra.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 4.5 -2.2            | Q4                |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 0.1 0.1             | Q1                |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 0.0 0.0             | Origem            |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    double X1, Y1;

    scanf("%lf %lf",&X1, &Y1);

    if(X1==0 && Y1==0)
        printf("Origem\n");
    else if(X1==0)
        printf("Eixo Y\n");
    else if(Y1==0)
        printf("Eixo X\n");
    else if(X1>0 && Y1>0)
        printf("Q1\n");
    else if(X1<0 && Y1<0)
        printf("Q3\n");
    else if(X1>0 && Y1<0)
        printf("Q4\n");
    else if(X1<0 && Y1>0)
        printf("Q2\n");
    return 0;
}
```

### C#

```cs
using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        double X = double.Parse(input[0]);
        double Y = double.Parse(input[1]);

        if(X==0 && Y==0)
            Console.WriteLine("Origem");
        else if(X==0)
            Console.WriteLine("Eixo Y");
        else if(Y==0)
            Console.WriteLine("Eixo X");
        else if(X>0 && Y>0)
            Console.WriteLine("Q1");
        else if(X<0 && Y<0)
            Console.WriteLine("Q3");
        else if(X>0 && Y<0)
            Console.WriteLine("Q4");
        else
            Console.WriteLine("Q2");
    }
}
```