1003 - Soma Simples
===================

Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável **SOMA**. A seguir escrever o valor desta variável.

Entrada
-------

O arquivo de entrada contém 2 valores inteiros.

Saída
-----

Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 30 <br/> 10         | SOMA = 40         |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -30 <br/> 10        | SOMA = -20        |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 0 <br/> 0           | SOMA = 0          |

&nbsp;

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

class Main {
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
