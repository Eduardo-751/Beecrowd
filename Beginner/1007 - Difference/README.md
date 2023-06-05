# 1007 - Diferença

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1007)

### C99

```c
#include <stdio.h>

int main()
{

    int A, B, C, D, DIFERENCA;

    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);

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
        int C = Integer.parseInt(in.readLine());
        int D = Integer.parseInt(in.readLine());

        int diferenca = ((A * B) - (C * D));

        System.out.printf("DIFERENCA = %d\n", diferenca);
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
        int C = int.Parse(Console.ReadLine());
        int D = int.Parse(Console.ReadLine());

        int diferenca = ((A * B) - (C * D));

        Console.WriteLine($"DIFERENCA = {diferenca}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())
C = int(input())
D = int(input())

diferença = ((A*B) - (C*D))
print(f"DIFERENCA = {diferença}")
```
