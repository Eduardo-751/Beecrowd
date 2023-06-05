<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1003 - Soma Simples</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e
                    atribua
                    à variável <strong>SOMA</strong>. A seguir escrever o valor desta variável.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém 2 valores inteiros.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da
                    igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de
                    imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".</p>
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
                                30<br>
                                10
                            </p>
                        </td>
                        <td>
                            <p>
                                SOMA = 40
                            </p>
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
                                -30<br>
                                10
                            </p>
                        </td>
                        <td>
                            <p>
                                SOMA = -20
                            </p>
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
                                0<br>
                                0
                            </p>
                        </td>
                        <td>
                            <p>
                                SOMA = 0
                            </p>
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
    printf("PROD = %i\n", A * B);

    return 0;
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int A = Integer.parseInt(in.readLine());
        int B = Integer.parseInt(in.readLine());

        System.out.printf("SOMA = %d\n", A + B);
    }
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());

        Console.WriteLine($"SOMA = {A * B}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())

print(f"PROD = {A * B}")
```
