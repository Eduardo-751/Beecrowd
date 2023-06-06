1001 - Extremamente Básico
==========================

Leia 2 valores inteiros e armazene-os nas variáveis **A** e **B**. Efetue a soma de **A** e **B** atribuindo o seu resultado na variável **X**. Imprima **X** conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "_Presentation Error_".

Entrada
-------

A entrada contém 2 valores inteiros.

Saída
-----

Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável **X** e pelo final de linha. Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 10 <br /> 9         | X = 19            |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -10 <br /> 4        | X = -6            |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 15 <br /> -7        | X = -8            |

&nbsp;

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
