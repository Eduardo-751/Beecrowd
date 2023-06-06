<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1009 - Salário com Bônus</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas
                    por
                    ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas
                    efetuadas,
                    informar o total a receber no final do mês, com duas casas decimais.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão
                    (double)
                    com duas casas decimais, representando o salário fixo do vendedor e montante total das vendas
                    efetuadas
                    por este vendedor, respectivamente.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.</p>
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
                                JOAO<br>
                                500.00<br>
                                1230.30</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                TOTAL = R$ 684.54</p>
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
                                PEDRO<br>
                                700.00<br>
                                0.00</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                TOTAL = R$ 700.00</p>
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
                                MANGOJATA<br>
                                1700.00<br>
                                1230.50</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                TOTAL = R$ 1884.58</p>
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
    char nome[15];
    double A, B, salario;

    scanf("%s", nome);
    scanf("%lf %lf", &A, &B);

    salario = A + (B * 0.15);
    printf("TOTAL = R$ %.2lf\n", salario);

    return 0;
}
```

### Java

```java
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Main {
    public static void main(String[] args) throws IOException {
        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        String name = in.readLine();
        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());

        double salario = A + (B * 0.15);

        System.out.printf("TOTAL = R$ %.2f\n", salario);
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
        String name = Console.ReadLine();
        double A = Double.Parse(Console.ReadLine());
        double B = Double.Parse(Console.ReadLine());

        double salario = A + (B * 0.15);

        Console.WriteLine($"TOTAL = R$ {salario:0.00}");
    }
}
```

### Python 3.9

```python
name = input()
A = float(input())
B = float(input())

salario = float(A + (B * 0.15))
print(f"TOTAL = R$ {salario:.2f}")
```
