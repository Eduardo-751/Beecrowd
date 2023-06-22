# 1866 - Conta

Dois amigos pedem ao atendente de uma lanchonete propor um desafio, de modo que quem acertasse mais, não precisaria pagar a conta. Então foi proposto o seguinte: Dado o seguinte somatório abaixo, informar o resultado, com uma quantidade de termos no mesmo:

S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ...

Escreva um programa que, dada uma quantidade de termos, informar o resultado do somatório acima.

## Entrada

Um número inteiro C será informado, que será a quantidade de casos de teste. Cada caso de teste inicia com um número inteiro N (1 ≤ N ≤ 1000), indicando a quantidade de termos da soma.

## Saída

Para cada caso de teste imprima um número S, que é o resultado da soma dos N termos da expressão.

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 3                  | 1                |
| 11                 | 1                |
| 7                  | 0                |
| 18                 |                  |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    int C, N;
    scanf("%i", &C);
    while (C--)
    {
        scanf("%i", &N);
        if (N % 2 == 0)
            printf("%i\n", 0);
        else
            printf("%i\n", 1);
    }
    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        int C = int.Parse(Console.ReadLine());
        while (C-- > 0)
        {
            int N = int.Parse(Console.ReadLine());
            int result = N % 2 == 0 ? 0 : 1;
            Console.WriteLine(result);
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
        int C = scanner.nextInt();
        while (C-- > 0) {
            int N = scanner.nextInt();
            int result = N % 2 == 0 ? 0 : 1;
            System.out.println(result);
        }
        scanner.close();
    }
}
```

### Python 3.9

```py
C = int(input())

while C > 0:
    N = int(input())
    result = 0 if N % 2 == 0 else 1
    print(result)
    C -= 1
```
