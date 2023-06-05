<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1007 - Diferença</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B
                    pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém 4 valores inteiros.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a mensagem <strong>DIFERENCA</strong> com todas as letras maiúsculas, conforme exemplo
                    abaixo,
                    com um espaço em branco antes e depois da igualdade.</p>
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
                                5<br>
                                6<br>
                                7<br>
                                8</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                DIFERENCA = -26</p>
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
                                0<br>
                                7<br>
                                8</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                DIFERENCA = -56</p>
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
                                5<br>
                                6<br>
                                -7<br>
                                8</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                DIFERENCA = 86</p>
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

int main()
{

    int A, B, C, D, DIFERENCA;

    scanf("%i %i %i %i", &A, &B, &C, &D);
    DIFERENCA = (A * B - C * D);
    printf("DIFERENCA = %i\n", DIFERENCA);

    return 0;
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        int A = Integer.parseInt(in.readLine());
        int B = Integer.parseInt(in.readLine());
        int C = Integer.parseInt(in.readLine());
        int D = Integer.parseInt(in.readLine());

        int diferenca = ((A * B) - (C * D));

        System.out.printf("DIFERENCA = %d\n", diferenca);
    }
}
```

### C#

```cs
using System;

class URI
{
    static void Main(string[] args)
    {
        int A = int.Parse(Console.ReadLine());
        int B = int.Parse(Console.ReadLine());
        int C = int.Parse(Console.ReadLine());
        int D = int.Parse(Console.ReadLine());

        int diferenca = ((A * B) - (C * D));

        Console.WriteLine($"DIFERENCA = {diferenca}");
    }
}
```

### Python 3.9

```python
A = int(input())
B = int(input())
C = int(input())
D = int(input())

diferença = ((A*B) - (C*D))
print(f"DIFERENCA = {diferença}")
```
