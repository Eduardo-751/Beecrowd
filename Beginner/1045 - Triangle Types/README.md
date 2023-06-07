1045 - Tipos de Triângulos
==========================

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:  

*   se A ≥ B+C, apresente a mensagem: **NAO FORMA TRIANGULO**
*   se A2 = B2 + C2, apresente a mensagem: **TRIANGULO RETANGULO**
*   se A2 > B2 + C2, apresente a mensagem: **TRIANGULO OBTUSANGULO**
*   se A2 < B2 + C2, apresente a mensagem: **TRIANGULO ACUTANGULO**
*   se os três lados forem iguais, apresente a mensagem: **TRIANGULO EQUILATERO**
*   se apenas dois dos lados forem iguais, apresente a mensagem: **TRIANGULO ISOSCELES**

Entrada
-------

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).

Saída
-----

Imprima todas as classificações do triângulo especificado na entrada.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7.0 5.0 7.0         | TRIANGULO ACUTANGULO <br/> TRIANGULO ISOSCELES |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 6.0 6.0 10.0        | TRIANGULO OBTUSANGULO <br/> TRIANGULO ISOSCELES |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 6.0 6.0 6.0         | TRIANGULO ACUTANGULO <br/> TRIANGULO EQUILATERO |

| Exemplos de Entrada | Exemplos de Saída   |
|---------------------|---------------------|
| 5.0 7.0 2.0         | NAO FORMA TRIANGULO |

| Exemplos de Entrada | Exemplos de Saída   |
|---------------------|---------------------|
| 6.0 8.0 10.0        | TRIANGULO RETANGULO |

&nbsp;


### C99

```c
#include <stdio.h>

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (B > A)
        swap(&A, &B);
    if (C > B)
    {
        swap(&B, &C);
        if (B > A)
            swap(&A, &B);
    }
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (A * A == B * B + C * C)
            printf("TRIANGULO RETANGULO\n");
        else if (A * A > B * B + C * C)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || A == C || B == C)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
```
