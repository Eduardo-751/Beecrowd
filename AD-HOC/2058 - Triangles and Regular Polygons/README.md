# 2058 - Triângulos e Polígonos Regulares

O professor Rafael adora computação gráfica. Ele gosta muito de renderizar objetos, especialmente bonecas. Mas ele não gosta de desenhar polígonos regulares usando triângulos. Fazer isso consiste em compor um polígono regular usando apenas triângulos, de forma que os triângulos não se interceptem e se utilize o menor número possível de triângulos na composição. Veja um quadrado e um pentágono com os triângulos na figura.

![Poligonos](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_2058.png)

O professor Rafael pediu para você calcular qual o número mínimo de triângulos necessários para compor um polígono regular de **N** lados.

## Entrada

A entrada é composta por um número **N** (3 ≤ **N** ≤ 10^9), que indica o número de lados de um polígono regular.

## Saída

A saída é o número mínimo de triângulos necessários para compor um polígono regular de **N** lados.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 3                   | 1                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 4                   | 2                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 5                   | 3                 |

---

### C99

```c
#include <stdio.h>

int main() {

    int N;

    scanf("%i", &N);

    printf("%i\n", N-2);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {

        int N = int.Parse(Console.ReadLine());

        Console.WriteLine($"{N-2}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();

        System.out.println(N - 2);
        scan.close();
    }
}
```

### Python

```python
N = int(input())

print(N-2)
```
