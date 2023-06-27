# 2006 - Identificando o Chá

Degustação de chá às escuras é a habilidade de identificar um chá usando apenas seus sentidos do olfato e paladar.

Isto faz parte da Competição Ideal de Consumidores de Chá Puro (da sigla em inglês ICPC), que um programa de TV local está organizando. Durante o show, um bule de chá completo é preparado e são entregues uma xícara de chá para cada um dos cinco competidores. Os participantes devem cheirar, saborear e avaliar a amostra, de modo a identificar o tipo de chá, que pode ser: (1) o chá branco; (2) chá verde; (3) chá preto; ou (4) chá de ervas. No final, as respostas são verificadas para determinar o número de suposições corretas.

Dado o tipo de chá real e as respostas fornecidas, determinar o número de participantes que receberam a resposta correta.

## Entrada

A primeira linha contém um inteiro **T** representando o tipo de chá (1 ≤ **T** ≤ 4). A segunda linha contém cinco inteiros **A**, **B**, **C**, **D** e **E**, que indica a resposta dada por cada competidor (1 ≤ **A**, **B**, **C**, **D**, **E** ≤ 4).

## Saída

A saída contém um inteiro representando o número de concorrentes que obtiveram a resposta correta.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 1 </br> 1 2 3 2 1   | 2                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 3 </br> 4 1 1 2 1   | 0                 |

---

### C99

```c
#include <stdio.h>

int main()
{

    int T, A, B, C, D, E, R = 0;

    scanf("%i", &T);
    scanf("%i %i %i %i %i", &A, &B, &C, &D, &E);

    if (A == T) R++;
    if (B == T) R++;
    if (C == T) R++;
    if (D == T) R++;
    if (E == T) R++;

    printf("%i\n", R);

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
        int T = int.Parse(Console.ReadLine());
        string[] input = Console.ReadLine().Split(' ');
        int[] contestant  = Array.ConvertAll(input , int.Parse);

        int R = Array.FindAll(contestant, r => r == T).Length;

        Console.WriteLine(R);
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int T = Integer.parseInt(scanner.nextLine());
        String[] respostas = scanner.nextLine().split(" ");

        int A = Integer.parseInt(respostas[0]);
        int B = Integer.parseInt(respostas[1]);
        int C = Integer.parseInt(respostas[2]);
        int D = Integer.parseInt(respostas[3]);
        int E = Integer.parseInt(respostas[4]);

        int corretas = 0;
        if (A == T) corretas++;
        if (B == T) corretas++;
        if (C == T) corretas++;
        if (D == T) corretas++;
        if (E == T) corretas++;

        System.out.println(corretas);
        scanner.close();
    }
}
```

### Python

```python
T = int(input())
respostas = list(map(int, input().split()))

corretas = respostas.count(T)
print(corretas)
```
