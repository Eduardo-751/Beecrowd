# 2454 - Flíper

Flíper é um tipo de jogo em que uma bola de metal cai por um labirinto de caminhos até chegar à parte inferior do labirinto. A quantidade de pontos que o jogador ganha depende do caminho que a bola segue. O jogador pode controlar o percurso da bola mudando a posição de algumas portas do labirinto. Cada porta pode estar na posição 0, que significa virada para a esquerda, ou na posição 1, que significa virada para a direita. Considere o flíper da figura abaixo, que tem duas portas. A porta P está na posição 1 e a porta R está na posição 0. Dessa forma, a bola vai cair pelo caminho B.

![Flíper](https://resources.beecrowd.com.br/gallery/images/contests/UOJ_177_L.png)

Você deve escrever um programa que, dadas as posições das portas P e R, nesse flíper da figura, diga por qual dos três caminhos, A, B ou C, a bola vai cair!

## Entrada

A entrada é composta por apenas uma linha contendo dois números P (0 ou 1) e R (0 ou 1), indicando as posições das duas portas do flíper da figura.

## Saída

A saída do seu programa deve ser também apenas uma linha, contendo uma letra maiúscula que indica o caminho por onde a bola vai cair: 'A', 'B' ou 'C'.

&nbsp;

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 1 0                | B                |

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 0 0                | C                |

---

### C99

```c
    #include <stdio.h>

    int main()
    {
        int P, R;

        scanf("%i %i", &P, &R);
        if(P == 0)
            printf("C\n");
        else
            if(R == 0)
                printf("B\n");
            else
                printf("A\n");

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
        int P = int.Parse(input[0]);
        int R = int.Parse(input[1]);

        if(P == 0)
            Console.WriteLine("C");
        else
            if(R == 0)
                Console.WriteLine("B");
            else
                Console.WriteLine("A");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int P = scan.nextInt();
        int R = scan.nextInt();

        if(P == 0)
            System.out.println("C");
        else
            if(R == 0)
                System.out.println("B");
            else
                System.out.println("A");
        scan.close();
    }
}
```

### Python

```python
P, R = map(int, input().split())

if P == 0:
    print("C")
else:
    if R == 0:
        print("B")
    else:
        print("A")
```
