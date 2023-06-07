1007 - Diferença
================

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A \* B - C \* D).

Entrada
-------

O arquivo de entrada contém 4 valores inteiros.

Saída
-----

Imprima a mensagem **DIFERENCA** com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.

&nbsp;

| Exemplos de Entrada       | Exemplos de Saída      |
|---------------------------|------------------------|
| 5 <br/> 6 <br/> 7 <br/> 8 | DIFERENCA = -26        |

| Exemplos de Entrada       | Exemplos de Saída      |
|---------------------------|------------------------|
| 0 <br/> 0 <br/> 7 <br/> 8 | DIFERENCA = -56        |

| Exemplos de Entrada       | Exemplos de Saída      |
|---------------------------|------------------------|
| 5 <br/> 6 <br/> -7 <br/> 8| DIFERENCA = 86         |

&nbsp;

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

class Main {
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
