# 1009 - Salário com Bônus

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1009)

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

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
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

### Python 3.9

```python
name = input()
A = float(input())
B = float(input())

salario = float(A + (B * 0.15))
print(f"TOTAL = R$ {salario:.2f}")
```
