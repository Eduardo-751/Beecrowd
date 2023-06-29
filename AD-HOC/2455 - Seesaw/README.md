# 2455 - Gangorra

Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo. Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando

<p style="text-align: center;"> P1 _ C1 = P2 _ C2 </p>

onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente.

## Entrada

A primeira e única linha da entrada contém 4 inteiros, **P1**, **C1**, **P2** e **C2**, (10 ≤ **P1**, **C1**, **P2** e **C2** ≤ 100) nesta ordem.

## Saída

Se a gangorra estiver equilibrada, imprima '0'. Se ela estiver desequilibrada de modo que a criança esquerda esteja na parte de baixo, imprima '-1', senão, imprima '1'.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 30 100 60 50        | 0                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 40 40 38 60         | 1                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 35 80 35 75         | -1                |

---

### C99

```c
#include <stdio.h>

int main()
{

    int P1, C1, P2, C2;

    scanf("%i %i %i %i", &P1, &C1, &P2, &C2);

    if (P1 * C1 == P2 * C2)
        printf("0\n");
    else if (P1 * C1 < P2 * C2)
        printf("1\n");
    else
        printf("-1\n");

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {

        int P1, C1, P2, C2;

        string[] input = Console.ReadLine().Split(' ');
        P1 = int.Parse(input[0]);
        C1 = int.Parse(input[1]);
        P2 = int.Parse(input[2]);
        C2 = int.Parse(input[3]);

        if (P1 * C1 == P2 * C2)
            Console.WriteLine("0");
        else if (P1 * C1 < P2 * C2)
            Console.WriteLine("1");
        else
            Console.WriteLine("-1");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        int P1, C1, P2, C2;

        Scanner scanner = new Scanner(System.in);
        P1 = scanner.nextInt();
        C1 = scanner.nextInt();
        P2 = scanner.nextInt();
        C2 = scanner.nextInt();

        if (P1 * C1 == P2 * C2)
            System.out.println("0");
        else if (P1 * C1 < P2 * C2)
            System.out.println("1");
        else
            System.out.println("-1");

        scanner.close();
    }
}
```

### Python

```python
P1, C1, P2, C2 = map(int, input().split())

if P1 * C1 == P2 * C2:
    print("0")
elif P1 * C1 < P2 * C2:
    print("1")
else:
    print("-1")
```
