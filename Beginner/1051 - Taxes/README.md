# 1051 - Imposto de Renda

Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1051_pt.png)

Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.

## Entrada

A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

## Saída

Imprima o texto "R$" seguido de um espaço e do valor total devido de Imposto de Renda, com duas casas após o ponto. Se o valor de entrada for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 3002.00             | R$ 80.36          |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 1701.12             | Isento            |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 4520.00             | R$ 355.60         |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    double salario, imposto=0;

    scanf("%lf", &salario);

    if(salario > 4500){
        imposto = imposto + (salario-4500)*0.28;
        imposto = imposto + (1500*0.18);
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000){
        imposto = imposto + (salario-3000)*0.18;
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 2000){
        imposto = imposto + (salario-2000)*0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else
        printf("Isento\n");

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

        double salary = double.Parse(Console.ReadLine());
        double taxes = 0;

        if (salary > 4500)
        {
            taxes += (taxes - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08);
        }
        else if (salary > 3000)
        {
            taxes += (taxes - 3000) * 0.18 + (1000 * 0.08);
        }
        else if (salary > 2000)
        {
            taxes += (taxes - 2000) * 0.08;

        }
        else
            Console.WriteLine("Isento");

        if (taxes != 0)
        {
            Console.WriteLine($"R$ {taxes:0.00}");
        }

    }
}
```
