# 1010 - Cálculo Simples

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

## Entrada

O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

## Saída

A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.

&nbsp;

| Exemplos de Entrada       | Exemplos de Saída       |
| ------------------------- | ----------------------- |
| 12 1 5.30 <br/> 16 2 5.10 | VALOR A PAGAR: R$ 15.50 |

| Exemplos de Entrada         | Exemplos de Saída       |
| --------------------------- | ----------------------- |
| 13 2 15.30 <br/> 161 4 5.20 | VALOR A PAGAR: R$ 51.40 |

| Exemplos de Entrada       | Exemplos de Saída       |
| ------------------------- | ----------------------- |
| 1 1 15.10 <br/> 2 1 15.10 | VALOR A PAGAR: R$ 30.20 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int A, B, C, D;
    double E, F, total;
    scanf("%i %i %lf", &A, &B, &E);
    scanf("%i %i %lf", &C, &D, &F);
    total = (B*E)+(D*F);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

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
        String[] input;
        input = Console.ReadLine().Trim().Split(' ');
        int qtd1 = int.Parse(input[1]);
        double valor1 = double.Parse(input[2]);

        input = Console.ReadLine().Trim().Split(' ');
        int qtd2 = int.Parse(input[1]);
        double valor2 = double.Parse(input[2]);

        double total = (qtd1 * valor1) + (qtd2 * valor2);
        Console.WriteLine($"VALOR A PAGAR: R$ {total:0.00}");
    }
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] input;
        input = in.readLine().trim().split(" ");
        int qtd1 = Integer.parseInt(input[1]);
        double valor1 = Double.parseDouble(input[2]);

        input = in.readLine().trim().split(" ");
        int qtd2 = Integer.parseInt(input[1]);
        double valor2 = Double.parseDouble(input[2]);

        double total = (qtd1 * valor1) + (qtd2 * valor2);
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", total);
    }
}
```

### Python 3.9

```python
cod1, qtd1, valor1 = input().split(' ')
qtd1 = int(qtd1)
valor1 = float(valor1)

cod2, qtd2, valor2 = input().split(' ')
qtd2 = int(qtd2)
valor2 = float(valor2)

total = (qtd1 * valor1) + (qtd2 * valor2)
print(f"VALOR A PAGAR: R$ {total:.2f}")
```
