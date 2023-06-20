# 1002 - Área do Círculo

A fórmula para calcular a área de uma circunferência é: **area = π . raio2**. Considerando para este problema que **π =** 3.14159:

\- Efetue o cálculo da área, elevando o valor de **raio** ao quadrado e multiplicando por **π**.

## Entrada

A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável **raio**.

## Saída

Apresentar a mensagem "A=" seguido pelo valor da variável **area**, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 2.00                | A=12.5664         |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 100.64              | A=31819.3103      |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 150.00              | A=70685.7750      |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    double raio;

    scanf("%lf", &raio);
    printf("A=%.4lf\n", 3.14159 * raio * raio);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        double raio = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine($"A={3.14159*raio*raio:0.0000}");
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

        double raio = Double.parseDouble(in.readLine());

        System.out.printf("A=%.4f\n", 3.14159*raio*raio);
    }
}

```

### Python 3.9

```python
raio = float(input())

print(f"A={3.14159*raio*raio:.4f}")
```
