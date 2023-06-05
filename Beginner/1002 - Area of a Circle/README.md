# 1002 - Área do Círculo

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1002)

### C99

```c
#include <stdio.h>

int main()
{
    double raio;

    scanf("%lf", &raio);
    printf("A=%.4lf\n", 3.14159 * raio * raio);

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

        double raio = Double.parseDouble(in.readLine());

        System.out.printf("A=%.4f\n", 3.14159*raio*raio);
    }
}

```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        double raio = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine($"A={3.14159*raio*raio:0.0000}");
    }
}
```

### Python 3.9

```python
raio = float(input())

print(f"A={3.14159*raio*raio:.4f}")
```
