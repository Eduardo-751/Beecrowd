# 1933 - Tri-du

Tri-du é um jogo de cartas derivado do popular jogo de Truco. O jogo utiliza um baralho normal de 52 cartas, com treze cartas de cada naipe, mas os naipes são ignorados. Apenas o valor das cartas,considerados como inteiros de 1 a 13, são utilizados.

No jogo, cada jogador recebe três cartas. As regras são simples:

- Um trio (três cartas de mesmo valor) ganha de uma dupla (duas cartas de mesmo valor).
- Um trio formado por cartas de maior valor ganha de um trio formado por cartas de menor valor.
- Uma dupla formada por cartas de maior valor ganha de uma dupla formada por cartas de menor valor.

Note que o jogo pode não ter ganhador em muitas situações; nesses casos, as cartas distribuídas são devolvidas ao baralho, que é embaralhado e uma nova partida é iniciada

Um jogador já recebeu duas das cartas que deve receber, e conhece seus valores. Sua tarefa é escrever um programa para determinar qual o valor da terceira carta que maximiza a probabilidade de esse jogador ganhar o jogo.

## Entrada

A entrada consiste de uma única linha que contém dois inteiros, A (1 ≤ A ≤ 13) e B (1 ≤ B ≤ 13) indicando os valores das duas primeiras cartas recebidas.

## Saída

Seu programa deve produzir uma única linha com um inteiro representando o valor da carta que maximiza a probabilidade de o jogador ganhar a partida.

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 10 7               | 10               |

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 2 2                | 2                |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    int A, B;
    scanf("%i %i", &A, &B);
    if (A > B)
        printf("%i\n", A);
    else
        printf("%i\n", B);
    return 0;
}
```

### C#

```cs
using System;

class URI
{
    static void Main(string[] args)
    {
        string[] input = Console.ReadLine().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);
        if (A > B)
            Console.WriteLine($"{A}");
        else
            Console.WriteLine($"{B}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        if (A > B)
            System.out.println(A);
        else
            System.out.println(B);
        scanner.close();
    }
}
```

### Python 3.9

```py
string = input().split()
A = int(string[0])
B = int(string[1])

if A > B:
    print(A)
else:
    print(B)
```
