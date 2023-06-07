1048 - Aumento de Salário
=========================

A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:

  

Salário

Percentual de Reajuste

0 - 400.00  
400.01 - 800.00  
800.01 - 1200.00  
1200.01 - 2000.00  
Acima de 2000.00

15%  
12%  
10%  
7%  
4%

Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.

Entrada
-------

A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

Saída
-----

Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste (ambos devem ser apresentados com 2 casas decimais) e o percentual de reajuste ganho, conforme exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                     |
|---------------------|---------------------------------------|
| 400.00              | Novo salario: 460.00 <br/> Reajuste ganho: 60.00 <br/> Em percentual: 15 %  |

| Exemplos de Entrada | Exemplos de Saída                     |
|---------------------|---------------------------------------|
| 800.01              | Novo salario: 880.01 <br/> Reajuste ganho: 80.00 <br/> Em percentual: 10 %  |

| Exemplos de Entrada | Exemplos de Saída                     |
|---------------------|---------------------------------------|
| 2000.00             | Novo salario: 2140.00 <br/> Reajuste ganho: 140.00 <br/> Em percentual: 7 % |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    double salario;
    int aux;

    scanf("%lf", &salario);

    if (salario <= 400.00)
        aux = 15;
    else if (salario <= 800.00)
        aux = 12;
    else if (salario <= 1200.00)
        aux = 10;
    else if (salario <= 2000.00)
        aux = 7;
    else
        aux = 4;

    printf("Novo salario: %.2lf\n", salario * (1 + aux / 100.00));
    printf("Reajuste ganho: %.2lf\n", salario * aux / 100.00);
    printf("Em percentual: %d \%\n", aux);

    return 0;
}
```
