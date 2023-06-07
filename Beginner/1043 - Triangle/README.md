1043 - Triângulo
================

Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

  
Perimetro = XX.X

  
Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

  
Area = XX.X

Entrada
-------

A entrada contém três valores reais.

Saída
-----

O resultado deve ser apresentado com uma casa decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 6.0 4.0 2.0         | Area = 10.0       |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 6.0 4.0 2.1         | Perimetro = 12.1  |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    double A, B, C;

    scanf("%lf %lf %lf", &A, &B, &C);
    if(A<B+C && B<A+C && C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);

    else
        printf("Area = %.1lf\n",((A+B)*C)/2);

    return 0;
}
```
