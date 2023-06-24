# 1072 - Intervalo 2

Leia um valor inteiro **N**. Este valor será a quantidade de valores inteiros **X** que serão lidos em seguida.  
Mostre quantos destes valores **X** estão dentro do intervalo \[10,20\] e quantos estão fora do intervalo, mostrando essas informações.

## Entrada

A primeira linha da entrada contém um valor inteiro **N** (**N** < 10000), que indica o número de casos de teste.  
Cada caso de teste a seguir é um valor inteiro **X** (-107 < **X** <107).

## Saída

Para cada caso, imprima quantos números estão dentro (**in**) e quantos valores estão fora (**out**) do intervalo.

&nbsp;

| Exemplos de Entrada                     | Exemplos de Saída |
| --------------------------------------- | ----------------- |
| 4 <br/> 14 <br/> 123 <br/> 10 <br/> -25 | 2 in <br/> 2 out  |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    double aux;
    int casos, i, in=0, out=0;

    scanf("%i", &casos);

    for(i=0; i<casos; i++){
        scanf("%lf", &aux);

        if(aux>=10 && aux<=20)
            in++;

        else
            out++;
    }

    printf("%i in\n", in);
    printf("%i out\n", out);

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
        int casos = int.Parse(Console.ReadLine());
        int inCount = 0;

        for (int i = 0; i < casos; i++)
        {
            int aux = int.Parse(Console.ReadLine());

            if (aux >= 10 && aux <= 20)
                inCount++;
        }

        Console.WriteLine($"{inCount} in");
        Console.WriteLine($"{casos - inCount} out");
    }
}
```
