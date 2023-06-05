# 1011 - Esfera

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1011)

### C99

```c

#include <stdio.h>
#include <math.h>

int main(){

    double r, total, r3;
    scanf("%lf", &r);
    r3 = pow(r, 3);
    total = (4.0/3.0)*3.14159*r3;
    printf("VOLUME = %.3lf\n", total);

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

        double r = Double.parseDouble(in.readLine());
        double total = (4.0/3.0)*3.14159*Math.pow(r, 3);

        System.out.printf("VOLUME = %.3f\n", total);
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
        double r = double.Parse(Console.ReadLine());
        double volume = (4.0/3.0) * 3.14159 * Math.Pow(r, 3);

        Console.WriteLine($"VOLUME = {volume:0.000}");
    }
}
```

### Python 3.9

```python
import math

r = float(input())
total = (4.0/3.0)*3.14159*math.pow(r, 3.0)

print(f"VOLUME = {total:.3f}")
```
