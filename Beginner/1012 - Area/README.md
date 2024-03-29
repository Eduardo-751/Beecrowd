# 1012 - Área

Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:  
a) a área do triângulo retângulo que tem A por base e C por altura.  
b) a área do círculo de raio C. (pi = 3.14159)  
c) a área do trapézio que tem A e B por bases e C por altura.  
d) a área do quadrado que tem lado B.  
e) a área do retângulo que tem lados A e B.

## Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

## Saída

O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                                                                                                 |
| ------------------- | ----------------------------------------------------------------------------------------------------------------- |
| 3.0 4.0 5.2         | TRIANGULO: 96.520 <br/> CIRCULO: 725.833 <br/> TRAPEZIO: 175.560 <br/> QUADRADO: 108.160 <br/> RETANGULO: 132.080 |

| Exemplos de Entrada | Exemplos de Saída                                                                                            |
| ------------------- | ------------------------------------------------------------------------------------------------------------ |
| 12.7 10.4 15.2      | TRIANGULO: 7.800 <br/> CIRCULO: 84.949 <br/> TRAPEZIO: 18.200 <br/> QUADRADO: 16.000 <br/> RETANGULO: 12.000 |

&nbsp;

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

### Python 3.9

```python
A, B, C = input().split(' ')
A = float(A)
B = float(B)
C = float(C)

triangulo = (A * C) / 2
circulo = (C * C) * 3.14159
trapezio = (A + B)/2 * C
quadrado = B * B
retangulo = A * B

print(f"TRIANGULO: {triangulo:.3f}")
print(f"CIRCULO: {circulo:.3f}")
print(f"TRAPEZIO: {trapezio:.3f}")
print(f"QUADRADO: {quadrado:.3f}")
print(f"RETANGULO: {retangulo:.3f}")
```
