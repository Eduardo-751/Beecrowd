# 1008 - Salário

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1008)

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

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
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

### Python 3.9

```python
A = int(input())
B = int(input())
C = float(input())

salario = (B*C)
print(f"NUMBER = {A}")
print(f"SALARY = U$ {salario:.2f}")
```
