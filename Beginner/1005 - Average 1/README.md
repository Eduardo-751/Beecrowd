# 105 - Média 1

Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

## Entrada

O arquivo de entrada contém 2 valores com uma casa decimal cada um.

## Saída

Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 5 dígitos após o ponto decimal e com um espaço em branco antes e depois da igualdade. Utilize variáveis de dupla precisão (double) e como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 5.0 <br/> 7.1       | MEDIA = 6.43182   |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 0 <br/> 7.1         | MEDIA = 4.84091   |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 10.0 <br/> 10.0     | MEDIA = 10.00000  |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    double A, B, MEDIA;

    scanf("%lf %lf", &A, &B);
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {
        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());

        double media = (3.5 * A + 7.5 * B) / 11;

        Console.WriteLine($"MEDIA = {media:0.00000}");
    }
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

        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());

        double media = (3.5 * A + 7.5 * B) / 11;

        System.out.printf("MEDIA = %.5f\n", media);
    }
}
```

### Python 3.9

```python
A = float(input())
B = float(input())

media = (3.5*A+7.5*B)/11
print(f"MEDIA = {media:.5f}")
```
