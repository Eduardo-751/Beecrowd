1036 - Fórmula de Bhaskara
==========================

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente _“Impossivel calcular”_, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
-------

Leia três valores de ponto flutuante (double) A, B e C.

Saída
-----

Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída                  |
|--------------------------|------------------------------------|
| 10.0 20.1 5.1            | R1 = -0.29788 <br/> R2 = -1.71212  |

| Exemplos de Entrada      | Exemplos de Saída                  |
|--------------------------|------------------------------------|
| 0.0 20.0 5.0             | Impossivel calcular                |

| Exemplos de Entrada      | Exemplos de Saída                  |
|--------------------------|------------------------------------|
| 10.3 203.0 5.0           | R1 = -0.02466 <br/> R2 = -19.68408 |

| Exemplos de Entrada      | Exemplos de Saída                  |
|--------------------------|------------------------------------|
| 10.0 3.0 5.0             | Impossivel calcular                |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>


int main(){

    double A, B, C;
    double x1, x2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4*A*C);
    x1 = (-B + sqrt(delta))/(2*A);
    x2 = (-B - sqrt(delta))/(2*A);

    if(A>0 &&   delta>0){
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    else
        printf("Impossivel calcular\n");

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
        double A, B, C;
        double delta, R1, R2;

        string[] input = Console.ReadLine().Split();
        A = double.Parse(input[0]);
        B = double.Parse(input[1]);
        C = double.Parse(input[2]);

        delta = B * B - 4 * A * C;

        if (delta < 0 || A == 0)
        {
            Console.WriteLine("Impossivel calcular");
        }
        else
        {
            R1 = (-B + Math.Sqrt(delta)) / (2 * A);
            R2 = (-B - Math.Sqrt(delta)) / (2 * A);
            Console.WriteLine($"R1 = {R1:F5}");
            Console.WriteLine($"R2 = {R2:F5}");
        }
    }
}
```
