# 1005 - Média 1

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1005)

### C99

```c
#include <stdio.h>

int main()
{

    double A, B, MEDIA;

    scanf("%lf %lf", &A, &B);
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);

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

        double media = (3.5 * A + 7.5 * B) / 11;

        System.out.printf("MEDIA = %.5f\n", media);
    }
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());

        double media = (3.5 * A + 7.5 * B) / 11;

        Console.WriteLine($"MEDIA = {media:0.00000}");
    }
}
```

### Python 3.9

```python
A = float(input())
B = float(input())

media = (3.5*A+7.5*B)/11
print(f"MEDIA = {media:.5f}")
```
