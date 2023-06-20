# 1013 - O Maior

Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:

![](https://resources.urionlinejudge.com.br/gallery/images/problems/UOJ_1013.png)

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.

## Entrada

O arquivo de entrada contém três valores inteiros.

## Saída

Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 7 14 106            | 106 eh o maior    |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 217 14 6            | 217 eh o maior    |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main()
{

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if ((a + b + abs(a - b)) / 2 > c)
        printf("%i eh o maior\n", (a + b + abs(a - b)) / 2);
    else
        printf("%i eh o maior\n", c);
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
        String[] input = Console.ReadLine().Trim().Split(' ');
        int A = int.Parse(input[0]);
        int B = int.Parse(input[1]);
        int C = int.Parse(input[2]);

        int aux = (A + B + Math.Abs(A-B)) / 2;
        if (aux > C)
            Console.WriteLine($"{aux} eh o maior");
        else
            Console.WriteLine($"{C} eh o maior");
    }
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String[] input = in.readLine().trim().split(" ");
        int A = Integer.parseInt(input[0]);
        int B = Integer.parseInt(input[1]);
        int C = Integer.parseInt(input[2]);

        int aux = (A + B + Math.abs(A - B)) / 2;
        if (aux > C)
            System.out.printf("%d eh o maior\n", aux);
        else
            System.out.printf("%d eh o maior\n", C);
    }
}
```

### Python 3.9

```python
A, B, C = input().split(' ')
A = int(A)
B = int(B)
C = int(C)

aux = int((A + B + abs(A - B)) / 2)

if (aux > C):
    print(f"{aux} eh o maior")
else:
    print(f"{C} eh o maior")
```
