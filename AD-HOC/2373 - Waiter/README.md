# 2373 - Garçom

Parte do treinamento de um novo garçom é carregar uma grande bandeja com várias latas de bebidas e copos e entregá-las todas numa mesa do restaurante. Durante o treinamento é comum que os garçons deixem cair as bandejas, quebrando todos os copos.

A SBC - Sociedade Brasileira de Copos - analisou estatísticas do treinamento de diversos garçons e descobriu que os garçons em treinamento deixam cair apenas bandejas que têm mais latas de bebidas que copos.

Por exemplo, se uma bandeja tiver 10 latas e 4 copos, certamente o garçom em treinamento a deixará cair, quebrando os 4 copos. Já se a bandeja tiver 5 latas e 6 copos, ele conseguirá entregá-la sem deixar cair.

Escreva um programa que, dado o número de latas e copos em cada bandeja que o garçom tentou entregar, imprime o total de copos que ele quebrou.

### Entrada

A primeira linha da entrada contém um inteiro **N** (1 ≤ **N** ≤ 100) representando o número de bandejas que o garçom tentou entregar. As **N** linhas seguintes representam as **N** bandejas. Cada linha contém dois inteiros **L** e **C**, indicando o número de latas e o número de copos naquela bandeja, respectivamente (0 ≤ **L**, **C** ≤ 100).

### Saída

Seu programa deve imprimir uma única linha, contendo um único inteiro, indicando o número total de copos que o garçom quebrou.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 3                   | 5                 |
| 10 5                |                   |
| 6 8                 |                   |
| 3 3                 |                   |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 4                   | 7                 |
| 10 6                |                   |
| 8 8                 |                   |
| 5 1                 |                   |
| 100 100             |                   |

---

### C99

```c
#include <stdio.h>

int main()
{

    int N, L, C, broken = 0;
    ;

    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%i %i", &L, &C);
        if (C < L)
            broken += C;
    }

    printf("%i\n", broken);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {

        int N, L, C, broken = 0;

        N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            string[] inputs = Console.ReadLine().Split(' ');
            L = int.Parse(inputs[0]);
            C = int.Parse(inputs[1]);

            if (C < L)
                broken += C;
        }

        Console.WriteLine(broken);
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int N, L, C, broken = 0;

        N = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < N; i++) {
            String[] inputs = scanner.nextLine().split(" ");
            L = Integer.parseInt(inputs[0]);
            C = Integer.parseInt(inputs[1]);

            if (C < L)
                broken += C;
        }

        System.out.println(broken);
        scanner.close();
    }
}
```

### Python

```python
N = int(input())

broken = 0

for i in range(N):
    L, C = map(int, input().split())

    if C < L:
        broken += C

print(broken)
```
