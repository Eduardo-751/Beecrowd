# 1180 - Menor Valor em Vetor

Faça um programa que leia um valor **N**. Este **N** será o tamanho de um vetor `X[N]`. A seguir, leia cada um dos valores de `X`, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.


## Entrada

A primeira linha de entrada contém um único inteiro **N** (1 < N < 1000), indicando o número de elementos que deverão ser lidos em seguida para o vetor `X[N]` de inteiros. A segunda linha contém cada um dos **N** valores, separados por um espaço. Vale lembrar que nenhuma entrada terá números repetidos.


## Saída

A primeira linha apresenta a mensagem **“Menor valor:”** seguida de um espaço e do menor valor lido na entrada. A segunda linha apresenta a mensagem **“Posicao:”** seguida de um espaço e da posição do vetor na qual se encontra o menor valor lido, lembrando que o vetor inicia na posição zero.


| Exemplo de Entrada | Exemplo de Saída   |
|--------------------|--------------------|
| 10                 | Menor valor: -5    |
| 1 2 3 4 -5 6 7 8 9 10 | Posicao: 4       |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int X[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    int R = X[0];
    int pos = 0;

    for (int i = 1; i < N; i++) {
        if (X[i] < R) {
            R = X[i];
            pos = i;
        }
    }

    printf("Menor valor: %d\n", R);
    printf("Posicao: %d\n", pos);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main() {
        int N = int.Parse(Console.ReadLine());
        string[] inputs = Console.ReadLine().Split(' ');

        int[] X = new int[N];
        for (int i = 0; i < N; i++) {
            X[i] = int.Parse(inputs[i]);
        }

        int R = X[0];
        int pos = 0;

        for (int i = 1; i < N; i++) {
            if (X[i] < R) {
                R = X[i];
                pos = i;
            }
        }

        Console.WriteLine($"Menor valor: {R}");
        Console.WriteLine($"Posicao: {pos}");
    }
}
```

### Java

```java
import java.util.Scanner;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int[] X = new int[N];

        for (int i = 0; i < N; i++) {
            X[i] = sc.nextInt();
        }

        int R = X[0];
        int pos = 0;

        for (int i = 1; i < N; i++) {
            if (X[i] < R) {
                R = X[i];
                pos = i;
            }
        }

        System.out.println("Menor valor: " + R);
        System.out.println("Posicao: " + pos);
    }
}
```

### Python

```python
N = int(input())
X = list(map(int, input().split()))

R = min(X)
print(f"Menor valor: {R}")
print(f"Posicao: {X.index(R)}")
```
