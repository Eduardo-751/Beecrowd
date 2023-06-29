# 1589 - Bob Conduite

Você tem em mãos dois cabos circulares de energia. O primeiro cabo tem raio R1 e o segundo cabo tem raio R2. Você precisa comprar um conduíte circular (veja a imagem abaixo que ilustra um conduíte) de maneira a passar os dois cabos por dentro dele:

![Conduíte](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1589.jpg)

Qual é o menor raio do conduíte que você deve comprar? Em outras palavras, dado dois círculos, qual é o raio do menor círculo que pode abranger ambos?

## Entrada

A entrada consiste em vários casos de teste. A primeira linha contém um inteiro T (1 ≤ T ≤ 10000), indicando o número de casos de teste.

Cada caso de teste consiste em uma única linha contendo dois números inteiros R1 e R2, representando os respectivos raios dos cabos. Os inteiros serão positivos, e todos os cálculos caberão em um inteiro normal de 32 bits.

## Saída

Para cada caso de teste, imprima o raio mínimo possível em uma única linha.

&nbsp;

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 3                  |
| 1 1                | 2                |
| 2 8                | 10               |
| 8 2                | 10               |

---

### C99

```c
#include <stdio.h>

int main()
{

    int T, R1, R2;
    scanf("%i", &T);
    while (T--)
    {
        scanf("%i %i", &R1, &R2);
        printf("%i\n", R1+R2);
    }
    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        int T = int.Parse(Console.ReadLine());
        while (T-- > 0)
        {
            string[] input = Console.ReadLine().Split(' ');
            int R1 = int.Parse(input[0]);
            int R2 = int.Parse(input[1]);
            Console.WriteLine(R1+R2);
        }
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        while (T-- > 0) {
            int R1 = scanner.nextInt();
            int R2 = scanner.nextInt();
            System.out.println(R1 + R2);
        }
        scanner.close();
    }
}
```

### Python 3.9

```py
T = int(input())

while T > 0:
    R1, R2 = map(int, input().split())
    print(R1 + R2)
    T -= 1
```
