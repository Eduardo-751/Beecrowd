# 1052 - Mês

Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este valor, deve ser apresentado como resposta o mês do ano por extenso, em inglês, com a primeira letra maiúscula.

## Entrada

A entrada contém um único valor inteiro.

## Saída

Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 4                   | April             |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int mes;
    scanf("%i", &mes);
    switch(mes){
        case 1 :
            printf("January\n");
        case 2 :
            printf("February\n");
        case 3 :
            printf("March\n");
        case 4 :
            printf("April\n");
        case 5 :
            printf("May\n");
        case 6 :
            printf("June\n");
        case 7 :
            printf("July\n");
        case 8 :
            printf("August\n");
        case 9 :
            printf("September\n");
        case 10 :
            printf("October\n");
        case 11 :
            printf("November\n");
        case 12 :
            printf("December\n");
    }
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
        int month = int.Parse(Console.ReadLine());
        switch (month)
        {
            case 1:
                Console.WriteLine("January");
                break;
            case 2:
                Console.WriteLine("February");
                break;
            case 3:
                Console.WriteLine("March");
                break;
            case 4:
                Console.WriteLine("April");
                break;
            case 5:
                Console.WriteLine("May");
                break;
            case 6:
                Console.WriteLine("June");
                break;
            case 7:
                Console.WriteLine("July");
                break;
            case 8:
                Console.WriteLine("August");
                break;
            case 9:
                Console.WriteLine("September");
                break;
            case 10:
                Console.WriteLine("October");
                break;
            case 11:
                Console.WriteLine("November");
                break;
            case 12:
                Console.WriteLine("December");
                break;
        }
    }
}
```
