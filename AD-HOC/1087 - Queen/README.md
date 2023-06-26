O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é a _dama_, que pode se mover qualquer quantidade de casas na mesma linha, na mesma coluna, ou em uma das duas diagonais, conforme exemplifica a figura abaixo:

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1087.png)

O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema de xadrez: dada a posição de uma dama em um tabuleiro de xadrez vazio (ou seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo, ela precisa para chegar em outra casa do tabuleiro?

Kary achou a solução para alguns desses problemas, mas teve dificuldade com outros, e por isso pediu que você escrevesse um programa que resolve esse tipo de problema.

## Entrada

A entrada contém vários casos de teste. A primeira e única linha de cada caso de teste contém quatro inteiros _X1_, _Y1_, _X2_ e _Y2_ (_1 ≤ X1, Y1, X2, Y2 ≤ 8_). A dama começa na casa de coordenadas _(X1, Y1)_, e a casa de destino é a casa de coordenadas*(X2, Y2)*. No tabuleiro, as colunas são numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para baixo também de 1 a 8. As coordenadas de uma casa na linha X e coluna Y são (_X, Y_ ).

O final da entrada é indicado por uma linha contendo quatro zeros.

## Saída

Para cada caso de teste da entrada seu programa deve imprimir uma única linha na saída, contendo um número inteiro, indicando o menor número de movimentos necessários para a dama chegar em sua casa de destino.

&nbsp;

| Exemplos de Entrada                               | Exemplos de Saída |
| ------------------------------------------------- | ----------------- |
| 4 4 6 2 <br/> 3 5 3 5 <br/> 5 5 4 3 <br/> 0 0 0 0 | 1 <br/> 0 <br/> 2 |

---

### C99

```c
#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, n = 2, dx, dy;
    do
    {
        scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
        if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
        {
            dx = x2 - x1;
            dy = y2 - y1;
            if (dx < 0)
                dx = dx * (-1);
            if (dy < 0)
                dy = dy * (-1);
            n = 2;
            if (x1 == x2 && y1 == y2)
                n = 0;
            else if (x1 == x2 || y1 == y2 || dy == dx)
                n = 1;
            printf("%i\n", n);
        }
    } while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);
    return 0;
}
```

### C#

```cs
using System;

class URI {

    static void Main(string[] args) {
        while (true)
        {
            string[] input = Console.ReadLine().Split(' ');
            int x1 = int.Parse(input[0]);
            int y1 = int.Parse(input[1]);
            int x2 = int.Parse(input[2]);
            int y2 = int.Parse(input[3]);

            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            int dx = Math.Abs(x2 - x1);
            int dy = Math.Abs(y2 - y1);

            if (dx == 0 && dy == 0)
                Console.WriteLine(0);
            else if (dx == dy || dx == 0 || dy == 0)
                Console.WriteLine(1);
            else
                Console.WriteLine(2);
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
        while (true) {
            String[] input = scanner.nextLine().split(" ");
            int x1 = Integer.parseInt(input[0]);
            int y1 = Integer.parseInt(input[1]);
            int x2 = Integer.parseInt(input[2]);
            int y2 = Integer.parseInt(input[3]);

            if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
                break;

            int dx = Math.abs(x2 - x1);
            int dy = Math.abs(y2 - y1);

            if (dx == 0 && dy == 0)
                System.out.println(0);
            else if (dx == dy || dx == 0 || dy == 0)
                System.out.println(1);
            else
                System.out.println(2);
        }
        scanner.close();
    }
}
```

### Python

```python
while True:
    input_data = input().split()
    x1 = int(input_data[0])
    y1 = int(input_data[1])
    x2 = int(input_data[2])
    y2 = int(input_data[3])

    if x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0:
        break

    dx = abs(x2 - x1)
    dy = abs(y2 - y1)

    if dx == 0 and dy == 0:
        print(0)
    elif dx == dy or dx == 0 or dy == 0:
        print(1)
    else:
        print(2)
```
