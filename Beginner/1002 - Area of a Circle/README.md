<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1002 - Área do Círculo</h1>
      <div class="problem">
        <div class="description">
          <p>
            A fórmula para calcular a área de uma circunferência é:
            <strong>area = π . raio<sup>2</sup></strong
            >. Considerando para este problema que
            <strong>π = </strong> 3.14159:
          </p>
          <p>
            - Efetue o cálculo da área, elevando o valor de
            <strong>raio</strong> ao quadrado e multiplicando por
            <strong>π</strong>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém um valor de ponto flutuante (dupla precisão), no
            caso, a variável
            <strong>raio</strong>.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Apresentar a mensagem "A=" seguido pelo valor da variável
            <strong>area</strong>, conforme exemplo abaixo, com 4 casas após o
            ponto decimal. Utilize variáveis de dupla precisão (double). Como
            todos os problemas, não esqueça de imprimir o fim de linha após o
            resultado, caso contrário, você receberá "Presentation Error".
          </p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>2.00</p>
              </td>
              <td>
                <p>A=12.5664</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>100.64</p>
              </td>
              <td>
                <p>A=31819.3103</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>150.00</p>
              </td>
              <td>
                <p>A=70685.7750</p>
              </td>
            </tr>
          </tbody>
        </table>
      </div>
    </div>
  </body>
</html>

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

### Python 3.9

```python
raio = float(input())

print(f"A={3.14159*raio*raio:.4f}")
```
