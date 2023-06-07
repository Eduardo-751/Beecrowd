1035 - Teste de Seleção 1
=========================

Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem **"Valores aceitos"**, senão escrever **"Valores nao aceitos"**.

Entrada
-------

Quatro números inteiros A, B, C e D.

Saída
-----

Mostre a respectiva mensagem após a validação dos valores.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída              |
|--------------------------|--------------------------------|
| 5 6 7 8                  | Valores nao aceitos            |

| Exemplos de Entrada      | Exemplos de Saída              |
|--------------------------|--------------------------------|
| 2 3 2 6                  | Valores aceitos                |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int A, B, C, D;

    scanf("%i %i %i %i", &A, &B, &C, &D);

    if(B>C && D>A && C+D > A+B && C > 0 && D > 0 && A % 2 == 0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

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
        String[] input = Console.ReadLine().Trim().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);
        int C = int.Parse(input[2]);
        int D = int.Parse(input[3]);

        if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0)
        {
            Console.WriteLine("Valores aceitos");
        }
        else
        {
            Console.WriteLine("Valores nao aceitos");
        }
    }
}
```
