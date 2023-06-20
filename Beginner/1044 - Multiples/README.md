# 1044 - Múltiplos

Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem **"Sao Multiplos"** ou **"Nao sao Multiplos"**, indicando se os valores lidos são múltiplos entre si.

## Entrada

A entrada contém valores inteiros.

## Saída

A saída deve conter uma das mensagens conforme descrito acima.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 6 24                | Sao Multiplos     |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 6 25                | Nao sao Multiplos |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int A, B;

    scanf("%i %i", &A, &B);
    if(A%B==0 || B%A==0)
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");

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
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);

        if (A % B == 0 || B % A == 0)
            Console.WriteLine("Sao Multiplos");
        else
            Console.WriteLine("Nao sao Multiplos");
    }
}
```
