<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1004 - Produto Simples</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta
                    operação à variável <strong>PROD</strong>. A seguir mostre a variável <strong>PROD</strong> com
                    mensagem correspondente.&nbsp; &nbsp;
                </p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém 2 valores inteiros.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a mensagem "PROD" e a variável <strong>PROD</strong> conforme exemplo abaixo, com um espaço
                    em branco antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso
                    contrário seu programa apresentará a mensagem: <em>“Presentation Error”</em>.</p>
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
                                3<br>
                                9</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                PROD = 27</p>
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
                                10</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                PROD = -300</p>
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
                                9</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                PROD = 0</p>
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
    int PROD = A * B;
    printf("PROD = %i\n", PROD);

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

        System.out.printf("PROD = %d\n", A * B);
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

        Console.WriteLine($"PROD = {A * B}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())

print(f"PROD = {A * B}")
```
