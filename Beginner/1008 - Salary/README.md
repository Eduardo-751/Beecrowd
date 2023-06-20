# 1008 - Salário

Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

## Entrada

O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas e o valor que o funcionário recebe por hora trabalhada, respectivamente.

## Saída

Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade. No caso do salário, também deve haver um espaço em branco após o $.

&nbsp;

| Exemplos de Entrada     | Exemplos de Saída                    |
| ----------------------- | ------------------------------------ |
| 25 <br/> 100 <br/> 5.50 | NUMBER = 25 <br/> SALARY = U$ 550.00 |

| Exemplos de Entrada     | Exemplos de Saída                    |
| ----------------------- | ------------------------------------ |
| 1 <br/> 200 <br/> 20.50 | NUMBER = 1 <br/> SALARY = U$ 4100.00 |

| Exemplos de Entrada     | Exemplos de Saída                    |
| ----------------------- | ------------------------------------ |
| 1 <br/> 145 <br/> 15.55 | NUMBER = 6 <br/> SALARY = U$ 2254.75 |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    int A, B;
    double C, Salario;
    scanf("%i %i", &A, &B);
    scanf("%lf", &C);
    salario = B * C;
    printf("NUMBER = %i\n", A);
    printf("SALARY = U$ %.2lf\n", salario);

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
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());
        double C = Double.Parse(Console.ReadLine());

        double salario = (B * C);

        Console.WriteLine($"NUMBER = {A}");
        Console.WriteLine($"SALARY = U$ {salario:0.00}");
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

        int A = Integer.parseInt(in.readLine());
        int B = Integer.parseInt(in.readLine());
        double C = Double.parseDouble(in.readLine());

        double salario = (B * C);

        System.out.printf("NUMBER = %d\n", A);
        System.out.printf("SALARY = U$ %.2f\n", salario);
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())
C = float(input())

salario = (B*C)
print(f"NUMBER = {A}")
print(f"SALARY = U$ {salario:.2f}")
```
