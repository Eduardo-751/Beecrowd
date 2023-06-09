3342 - Keanu
=====

Keanu estava testando novos modelos de tabuleiros de xadrez quanto teve a seguinte duvida:

Quantas casas brancas e quantas casas pretas tem um tabuleiro de xadrez de tamanho **n**x**n**?
  
Tabuleiro 3x3:

<img src=https://resources.beecrowd.com.br/gallery/images/contests/UOJ_3668-a.png width="150" height="150">

5 casas brancas e 4 casas pretas

Tabuleiro 4x4:

<img src=https://resources.beecrowd.com.br/gallery/images/contests/UOJ_3668-b.png width="150" height="150">

8 casas brancas e 8 casas pretas

Observe que a casa mais acima e mais à esquerda é sempre branca.

Entrada
-------

O input consiste de uma linha com um único inteiro **n**.

2 ≤ n ≤ 100

Saída
-----

Imprima "**a** casas brancas e **b** casas pretas" sem aspas, sendo **a** a quantidade de casas brancas e **b** a quantidade de casas pretas.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                |
|---------------------|----------------------------------|
| 3                   | 5 casas brancas e 4 casas pretas |

| Exemplos de Entrada | Exemplos de Saída                |
|---------------------|----------------------------------|
| 4                   | 8 casas brancas e 8 casas pretas |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {
    int N, cBranca, cPreta;
    scanf("%i", &N);

    int totalCells = N * N;
    cBranca = totalCells / 2;
    cPreta = totalCells - cBranca;

    printf("%i casas brancas e %i casas pretas", cBranca, cPreta);

    return 0;
}
```

### Java

```java
import java.io.IOException;
import java.util.Scanner;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();

        int totalCells = N * N;
        int cPreta = totalCells / 2;
        int cBranca = totalCells - cPreta;

        System.out.println(cBranca + " casas brancas e " + cPreta + " casas pretas");

        scanner.close();
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
        int N, cBranca, cPreta;
        N = int.Parse(Console.ReadLine());

        int totalCells = N * N;
        cPreta = totalCells / 2;
        cBranca = totalCells - cPreta;

        Console.WriteLine($"{cBranca} casas brancas e {cPreta} casas pretas");
    }
}
```

### Python 3.9

```py
N = int(input())

totalCells = N * N
cPreta = totalCells // 2
cBranca = totalCells - cPreta

print(f"{cBranca} casas brancas e {cPreta} casas pretas")
```
