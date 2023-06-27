# 1930 - Tomadas

Finalmente, o time da Universidade conseguiu a classificação para a Final Nacional da Maratona de Programação da SBC. Os três membros do time e o técnico estão ansiosos para bem representar a Universidade, e além de treinar muito, preparam com todos os detalhes a sua viagem a São Paulo, onde será realizada a Final Nacional.

Eles planejam levar na viagem todos os seus vários equipamentos eletrônicos: celular, tablet, notebook, ponto de acesso wifi, câmeras, etc, e sabem que necessitarão de várias tomadas de energia para conectar todos esses equipamentos. Eles foram informados de que ficarão os quatro no mesmo quarto de hotel, mas já foram alertados de que em cada quarto há apenas uma tomada de energia disponível.

Precavidos, os três membros do time e o técnico compraram cada um uma régua de tomadas, permitindo assim ligar vários aparelhos na única tomada do quarto de hotel; eles também podem ligar uma régua em outra para aumentar ainda mais o número de tomadas disponíveis. No entanto, como as réguas têm muitas tomadas, eles pediram para você escrever um programa que, dado o número de tomadas em cada régua, determine o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

## Entrada

A entrada consiste de uma linha com quatro números inteiros **T1**, **T2**, **T3**, **T4**, indicando o número de tomadas de cada uma das quatro réguas (2 ≤ **Ti** ≤ 6).

## Saída

Seu programa deve produzir uma única linha contendo um único número inteiro, indicando o número máximo de aparelhos que podem ser conectados à energia num mesmo instante.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 2 4 3 2             | 8                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 6 6 6 6             | 21                |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 2 2 2 2             | 5                 |

---

### C99

```c
#include <stdio.h>

int main()
{

    int T1, T2, T3, T4;

    scanf("%i %i %i %i", &T1, &T2, &T3, &T4);

    printf("%i\n", T1 + T2 + T3 + T4 - 3);

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
        int T1 = int.Parse(input[0]);
        int T2 = int.Parse(input[1]);
        int T3 = int.Parse(input[2]);
        int T4 = int.Parse(input[3]);
        Console.WriteLine($"{T1 + T2 + T3 + T4 - 3}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int T1 = scan.nextInt();
        int T2 = scan.nextInt();
        int T3 = scan.nextInt();
        int T4 = scan.nextInt();
        System.out.println(T1+T2+T3+T4-3);
        scan.close();
    }
}
```

### Python

```python
T1, T2, T3, T4 = map(int, input().split())

print(T1+T2+T3+T4-3)
```
