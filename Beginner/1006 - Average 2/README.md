1006 - Média 2
==============

Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

Entrada
-------

O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

Saída
-----

Imprima a mensagem "MEDIA" e a média do aluno conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade. Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída      |
|--------------------------|------------------------|
| 5.0 <br/> 6.0 <br/> 7.0  | MEDIA = 6.3            |

| Exemplos de Entrada      | Exemplos de Saída      |
|--------------------------|------------------------|
| 5.0 <br/> 10.0 <br/> 10.0| MEDIA = 9.0            |

| Exemplos de Entrada      | Exemplos de Saída      |
|--------------------------|------------------------|
| 10.0 <br/> 10.0 <br/> 5.0| MEDIA = 7.5            |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    double A, B, C, MEDIA;

    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = ((A * 2) + (B * 3) + (C * 5)) / 10;
    printf("MEDIA = %.1lf\n", MEDIA);

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

        double A = Double.parseDouble(in.readLine());
        double B = Double.parseDouble(in.readLine());
        double C = Double.parseDouble(in.readLine());

        double media = ((A * 2) + (B * 3) + (C * 5)) / 10;

        System.out.printf("MEDIA = %.1f\n", media);
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
        double A = double.Parse(Console.ReadLine());
        double B = double.Parse(Console.ReadLine());
        double C = double.Parse(Console.ReadLine());

        double media = ((A * 2) + (B * 3) + (C * 5)) / 10;

        Console.WriteLine($"MEDIA = {media:0.0}");
    }
}
```

### Python 3.9

```python
A = float(input())
B = float(input())
C = float(input())

media = ((A * 2) + (B * 3) + (C * 5)) / 10
print(f"MEDIA = {media:.1f}")
```
