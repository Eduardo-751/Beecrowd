# 2632 - Magic and Sword

No jogo de defesa de torre "Magic and Sword", o jogador pode lançar magias de área para derrotar unidades inimigas. As magias são elementais: fogo, água, ar e terra, e a região afetada é determinada por um círculo cujo raio depende do nível da magia.

A tabela abaixo lista cada magia, seu dano e o respectivo raio por nível:

<img src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_2632.png">

As unidades inimigas são delimitadas por um retângulo com largura `w` e altura `h`, com o canto inferior esquerdo posicionado no ponto `(x0, y0)`. O inimigo sofrerá dano se o retângulo delimitador tiver qualquer interseção com a área definida pelo círculo da magia.

Dada a posição e o retângulo delimitador da unidade inimiga, o centro da explosão, o identificador e o nível da magia, determine o dano sofrido pela unidade. Se a unidade estiver fora do alcance da magia, o dano sofrido é zero.

## Entrada

A entrada consiste em vários casos de teste. A primeira linha da entrada contém um inteiro `T` (1 ≤ T ≤ 1000) representando o número de casos de teste. Cada caso de teste é descrito em duas linhas. A primeira linha contém quatro números inteiros `w`, `h`, `x0` e `y0` (1 ≤ w, h ≤ 1000, 0 ≤ x0, y0 ≤ 1000) representando as dimensões do retângulo e as coordenadas do canto inferior esquerdo. A segunda linha do caso de teste contém uma string com o identificador da magia ("fire" para fogo, "water" para água, "earth" para terra e "air" para ar), o nível `N` da magia (1 ≤ N ≤ 3) e as coordenadas `cx` e `cy` (0 ≤ cx, cy ≤ 1000) do centro da área de explosão.

## Saída

Para cada caso de teste, imprima o dano sofrido pela unidade, seguido de uma quebra de linha.

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 4                  |                  |
| 10 10 50 50        | 0                |
| fire 1 85 55       |                  |
| 10 10 50 50        | 200              |
| fire 2 85 55       |                  |
| 10 10 50 100       | 300              |
| water 3 100 100    |                  |
| 10 10 50 100       | 100              |
| air 3 100 100      |                  |

&nbsp;

### C99

```c
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int fire[4] = {0, 20, 30, 50};
    int water[4] = {0, 10, 25, 40};
    int earth[4] = {0, 25, 55, 70};
    int air[4] = {0, 18, 38, 60};

    int T;
    scanf("%i", &T);
    while (T--)
    {
        int w, h, x0, y0, N, Cx, Cy, Px, Py;
        char magic[6];

        scanf("%i %i %i %i", &w, &h, &x0, &y0);
        scanf("%s %i %i %i", magic, &N, &Cx, &Cy);

        if (Cx < x0)
            Px = x0;
        else if (Cx > x0 + w)
            Px = x0 + w;
        else
            Px = Cx;

        if (Cy < y0)
            Py = y0;
        else if (Cy > y0 + h)
            Py = y0 + h;
        else
            Py = Cy;

        double dist = sqrt(pow(Cx - Px, 2) + pow(Cy - Py, 2));
        int damage = 0;
        if (strcmp(magic, "fire") == 0)
            if (dist <= fire[N])
                damage = 200;
        if (strcmp(magic, "water") == 0)
            if (dist <= water[N])
                damage = 300;
        if (strcmp(magic, "earth") == 0)
            if (dist <= earth[N])
                damage = 400;
        if (strcmp(magic, "air") == 0)
            if (dist <= air[N])
                damage = 100;
        printf("%d\n", damage);
    }
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

        int[] fire = { 0, 20, 30, 50 };
        int[] water = { 0, 10, 25, 40 };
        int[] earth = { 0, 25, 55, 70 };
        int[] air = { 0, 18, 38, 60 };

        int T = int.Parse(Console.ReadLine());
        while (T > 0)
        {
            int w, h, x0, y0, N, Cx, Cy, Px, Py;
            string magic;

            string[] dimensions = Console.ReadLine().Split(' ');
            w = int.Parse(dimensions[0]);
            h = int.Parse(dimensions[1]);
            x0 = int.Parse(dimensions[2]);
            y0 = int.Parse(dimensions[3]);

            string[] input = Console.ReadLine().Split(' ');
            magic = input[0];
            N = int.Parse(input[1]);
            Cx = int.Parse(input[2]);
            Cy = int.Parse(input[3]);

            if (Cx < x0)
                Px = x0;
            else if (Cx > x0 + w)
                Px = x0 + w;
            else
                Px = Cx;

            if (Cy < y0)
                Py = y0;
            else if (Cy > y0 + h)
                Py = y0 + h;
            else
                Py = Cy;

            double dist = Math.Sqrt(Math.Pow(Cx - Px, 2) + Math.Pow(Cy - Py, 2));
            int damage = 0;

            if (magic == "fire")
            {
                if (dist <= fire[N])
                    damage = 200;
            }
            else if (magic == "water")
            {
                if (dist <= water[N])
                    damage = 300;
            }
            else if (magic == "earth")
            {
                if (dist <= earth[N])
                    damage = 400;
            }
            else if (magic == "air")
            {
                if (dist <= air[N])
                    damage = 100;
            }

            Console.WriteLine(damage);
            T--;
        }
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int[][] magicRanges = {
                { 0, 20, 30, 50 },
                { 0, 10, 25, 40 },
                { 0, 25, 55, 70 },
                { 0, 18, 38, 60 }
        };

        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();

        while (T > 0) {
            int w = scanner.nextInt();
            int h = scanner.nextInt();
            int x0 = scanner.nextInt();
            int y0 = scanner.nextInt();
            String magic = scanner.next();
            int N = scanner.nextInt();
            int Cx = scanner.nextInt();
            int Cy = scanner.nextInt();

            int Px, Py;

            if (Cx < x0)
                Px = x0;
            else if (Cx > x0 + w)
                Px = x0 + w;
            else
                Px = Cx;

            if (Cy < y0)
                Py = y0;
            else if (Cy > y0 + h)
                Py = y0 + h;
            else
                Py = Cy;

            double dist = Math.sqrt(Math.pow(Cx - Px, 2) + Math.pow(Cy - Py, 2));
            int damage = 0;

            switch (magic) {
                case "fire":
                    if (dist <= magicRanges[0][N])
                        damage = 200;
                    break;
                case "water":
                    if (dist <= magicRanges[1][N])
                        damage = 300;
                    break;
                case "earth":
                    if (dist <= magicRanges[2][N])
                        damage = 400;
                    break;
                case "air":
                    if (dist <= magicRanges[3][N])
                        damage = 100;
                    break;
            }

            System.out.println(damage);
            T--;
        }

        scanner.close();
    }
}
```

### Python 3.9

```py
import math

magic_ranges = [
    [0, 20, 30, 50],
    [0, 10, 25, 40],
    [0, 25, 55, 70],
    [0, 18, 38, 60]
]

T = int(input())

while T > 0:
    w, h, x0, y0 = map(int, input().split())
    magic, N, Cx, Cy = input().split()
    N = int(N)
    Cx = int(Cx)
    Cy = int(Cy)

    Px = x0 if Cx < x0 else (x0 + w) if Cx > x0 + w else Cx
    Py = y0 if Cy < y0 else (y0 + h) if Cy > y0 + h else Cy

    dist = math.sqrt((Cx - Px) ** 2 + (Cy - Py) ** 2)
    damage = 0

    if magic == "fire" and dist <= magic_ranges[0][N]:
        damage = 200
    elif magic == "water" and dist <= magic_ranges[1][N]:
        damage = 300
    elif magic == "earth" and dist <= magic_ranges[2][N]:
        damage = 400
    elif magic == "air" and dist <= magic_ranges[3][N]:
        damage = 100

    print(damage)
    T -= 1

```
