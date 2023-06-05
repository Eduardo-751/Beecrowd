# 1006 - Média 2

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1006)

### C99

```c
#include <stdio.h>

int main()
{

    double A, B, C, MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MEDIA = %.1lf\n", MEDIA);

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

        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());
        double C = Double.parseDouble(in.readLine());

        double media = ((A * 2) + (B * 3) + (C * 5)) / 10;

        System.out.printf("MEDIA = %.1f\n", media);
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
        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());
        double C = double.Parse(Console.ReadLine());

        double media = ((A * 2) + (B * 3) + (C * 5)) / 10;

        Console.WriteLine($"MEDIA = {media:0.0}");
    }
}
```

### Python 3.9

```python
A = float(input())
B = float(input())
C = float(input())

media = ((A * 2) + (B * 3) + (C * 5)) / 10
print(f"MEDIA = {media:.1f}")
```
