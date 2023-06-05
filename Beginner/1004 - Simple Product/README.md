# 1004 - Produto Simples

## [Descrição](https://www.beecrowd.com.br/judge/pt/problems/view/1004)

### C99

```c
#include <stdio.h>

int main(){

    int A, B;

    scanf("%i %i", &A, &B);
    int PROD = A * B;
    printf("PROD = %i\n", PROD);

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

        int A = Integer.parseInt(in.readLine());
        int B = Integer.parseInt(in.readLine());

        System.out.printf("PROD = %d\n", A * B);
    }
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());

        Console.WriteLine($"PROD = {A * B}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())

print(f"PROD = {A * B}")
```