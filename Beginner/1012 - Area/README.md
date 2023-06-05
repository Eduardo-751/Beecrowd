<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1012 - Área</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em
                    seguida, calcule e mostre: <br />
                    a) a área do triângulo retângulo que tem A por base e C por altura. <br />
                    b) a área do círculo de raio C. (pi = 3.14159) <br />
                    c) a área do trapézio que tem A e B por bases e C por altura. <br />
                    d) a área do quadrado que tem lado B. <br />
                    e) a área do retângulo que tem lados A e B. <br />
                </p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém três valores com um dígito após o ponto decimal.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas
                    acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor
                    calculado deve ser apresentado com 3 dígitos após o ponto decimal.</p>
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
                                3.0 4.0 5.2</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                TRIANGULO: 7.800<br />
                                CIRCULO: 84.949<br />
                                TRAPEZIO: 18.200<br />
                                QUADRADO: 16.000<br />
                                RETANGULO: 12.000</p>
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
                                12.7 10.4 15.2</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                TRIANGULO: 96.520<br />
                                CIRCULO: 725.833<br />
                                TRAPEZIO: 175.560<br />
                                QUADRADO: 108.160<br />
                                RETANGULO: 132.080</p>
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
#include <math.h>

int main(){

    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", (A*C)/2, (C*C)*3.14159, ((A+B)*C)/2, B*B, A*B);

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

        String[] input = in.readLine().trim().split(" ");
        double A = Double.parseDouble(input[0]);
        double B = Double.parseDouble(input[1]);
        double C = Double.parseDouble(input[2]);

        double triangulo = (A * C) / 2;
        double circulo = (C * C) * 3.14159;
        double trapezio = (A + B)/2 * C;
        double quadrado = B * B;
        double retangulo = A * B;

        System.out.printf("TRIANGULO: %.3f\n", triangulo);
        System.out.printf("CIRCULO: %.3f\n", circulo);
        System.out.printf("TRAPEZIO: %.3f\n", trapezio);
        System.out.printf("QUADRADO: %.3f\n", quadrado);
        System.out.printf("RETANGULO: %.3f\n", retangulo);
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
        String[] input = Console.ReadLine().Trim().Split(' ');
        Double A = double.Parse(input[0]);
        Double B = double.Parse(input[1]);
        Double C = double.Parse(input[2]);

        double triangulo = (A*C)/2;
        double circulo = (C*C)*3.14159;
        double trapezio = ((A+B)*C)/2;
        double quadrado = B*B;
        double retangulo = A*B;

        Console.WriteLine($"TRIANGULO: {triangulo:0.000}\nCIRCULO: {circulo:0.000}\nTRAPEZIO: {trapezio:0.000}\nQUADRADO: {quadrado:0.000}\nRETANGULO: {retangulo:0.000}");
    }
}
```

### Python 3.9

```python

```
