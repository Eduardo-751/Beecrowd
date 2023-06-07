<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1001 - Extremamente Básico</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 2 valores inteiros e armazene-os nas variáveis
            <strong>A</strong> e <strong>B</strong>. Efetue a soma de
            <strong>A</strong> e <strong>B</strong> atribuindo o seu resultado
            na variável <strong>X</strong>. Imprima <strong>X</strong> conforme
            exemplo apresentado abaixo. Não apresente mensagem alguma além
            daquilo que está sendo especificado e não esqueça de imprimir o fim
            de linha após o resultado, caso contrário, você receberá "<em
              >Presentation Error</em
            >".
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém 2 valores inteiros.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da
            variável <strong> X </strong> e pelo final de linha. Cuide para que
            tenha um espaço antes e depois do sinal de igualdade, conforme o
            exemplo abaixo.
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
                <p>
                  10<br />
                  9
                </p>
              </td>
              <td>
                <p>X = 19</p>
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
                <p>
                  -10<br />
                  4
                </p>
              </td>
              <td>
                <p>X = -6</p>
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
                <p>
                  15<br />
                  -7
                </p>
              </td>
              <td>
                <p>X = 8</p>
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

int main(){

    int A, B;

    scanf("%i %i", &A, &B);
    printf("X = %i\n", A + B);

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

        int A = Integer.parseInt(in.readLine());
        int B = Integer.parseInt(in.readLine());

         System.out.printf("X = %d\n", A + B);
    }
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        int A = Convert.ToInt32(Console.ReadLine());
        int B = Convert.ToInt32(Console.ReadLine());

        Console.WriteLine($"X = {A + B}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())

print(f"X = {A + B}")

```
