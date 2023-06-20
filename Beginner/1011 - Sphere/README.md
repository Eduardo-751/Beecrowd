# 1011 - Esfera

Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) \* pi \* R3. Considere (atribua) para pi o valor 3.14159.

Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), assumem que o resultado da divisão entre dois inteiros é outro inteiro.

## Entrada

O arquivo de entrada contém um valor de ponto flutuante (dupla precisão), correspondente ao raio da esfera.

## Saída

A saída deverá ser uma mensagem "VOLUME" conforme o exemplo fornecido abaixo, com um espaço antes e um espaço depois da igualdade. O valor deverá ser apresentado com 3 casas após o ponto.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 3                   | VOLUME = 113.097  |

| Exemplos de Entrada | Exemplos de Saída  |
| ------------------- | ------------------ |
| 15                  | VOLUME = 14137.155 |

| Exemplos de Entrada | Exemplos de Saída        |
| ------------------- | ------------------------ |
| 1523                | VOLUME = 14797486501.627 |

&nbsp;

### C99

```c

#include <stdio.h>
#include <math.h>

int main(){

    double r, total, r3;
    scanf("%lf", &r);
    r3 = pow(r, 3);
    total = (4.0/3.0)*3.14159*r3;
    printf("VOLUME = %.3lf\n", total);

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
        double r = double.Parse(Console.ReadLine());
        double volume = (4.0/3.0) * 3.14159 * Math.Pow(r, 3);

        Console.WriteLine($"VOLUME = {volume:0.000}");
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

        double r = Double.parseDouble(in.readLine());
        double total = (4.0/3.0)*3.14159*Math.pow(r, 3);

        System.out.printf("VOLUME = %.3f\n", total);
    }
}
```

### Python 3.9

```python
import math

r = float(input())
total = (4.0/3.0)*3.14159*math.pow(r, 3.0)

print(f"VOLUME = {total:.3f}")
```
