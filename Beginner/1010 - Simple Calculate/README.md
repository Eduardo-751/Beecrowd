# 1010 - Cálculo Simples

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1010)

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

### Java

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
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
