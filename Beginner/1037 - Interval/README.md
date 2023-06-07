1037 - Intervalo
================

Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.

O símbolo ( representa "maior que". Por exemplo:  
[0,25]  indica valores entre 0 e 25.0000, inclusive eles.  
(25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000

Entrada
-------

O arquivo de entrada contém um número com ponto flutuante qualquer.

Saída
-----

A saída deve ser uma mensagem conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 25.01               | Intervalo (25,50] |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 25.00               | Intervalo [0,25]  |

| Exemplos de Entrada | Exemplos de Saída  |
|---------------------|--------------------|
| 100.00              | Intervalo (75,100] |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -25.02              | Fora de intervalo |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    double A;

    scanf("%lf", &A);

    if(A>=0 && A<=25)
        printf("Intervalo [0,25]\n");
    else if(A>25 && A<=50)
        printf("Intervalo (25,50]\n");
    else if(A>50 && A<=75)
        printf("Intervalo (50,75]\n");
    else if(A>75 && A<=100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
    return 0;
}
```

### C#

```cs
using System; 

class URI {
    static void Main(string[] args)
    {
        double valor = Convert.ToDouble(Console.ReadLine());

        if (valor >= 0 && valor <= 25)
        {
            Console.WriteLine("Intervalo [0,25]");
        }
        else if (valor > 25 && valor <= 50)
        {
            Console.WriteLine("Intervalo (25,50]");
        }
        else if (valor > 50 && valor <= 75)
        {
            Console.WriteLine("Intervalo (50,75]");
        }
        else if (valor > 75 && valor <= 100)
        {
            Console.WriteLine("Intervalo (75,100]");
        }
        else
        {
            Console.WriteLine("Fora de intervalo");
        }
    }
}
```
