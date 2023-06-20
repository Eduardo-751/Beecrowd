# 1009 - Salário com Bônus

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

## Entrada

O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.

## Saída

Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.

&nbsp;

| Exemplos de Entrada             | Exemplos de Saída |
| ------------------------------- | ----------------- |
| JOAO <br/> 500.00 <br/> 1230.30 | TOTAL = R$ 684.54 |

| Exemplos de Entrada           | Exemplos de Saída |
| ----------------------------- | ----------------- |
| PEDRO <br/> 700.00 <br/> 0.00 | TOTAL = R$ 700.00 |

| Exemplos de Entrada                   | Exemplos de Saída  |
| ------------------------------------- | ------------------ |
| MANGOJATA <br/> 1700.00 <br/> 1230.50 | TOTAL = R$ 1884.58 |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    char nome[15];
    double A, B, salario;

    scanf("%s", nome);
    scanf("%lf %lf", &A, &B);

    salario = A + (B * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario);

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
        String name = Console.ReadLine();
        double A = Double.Parse(Console.ReadLine());
        double B = Double.Parse(Console.ReadLine());

        double salario = A + (B * 0.15);

        Console.WriteLine($"TOTAL = R$ {salario:0.00}");
    }
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String name = in.readLine();
        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());

        double salario = A + (B * 0.15);

        System.out.printf("TOTAL = R$ %.2f\n", salario);
    }
}
```

### Python 3.9

```python
name = input()
A = float(input())
B = float(input())

salario = float(A + (B * 0.15))
print(f"TOTAL = R$ {salario:.2f}")
```
