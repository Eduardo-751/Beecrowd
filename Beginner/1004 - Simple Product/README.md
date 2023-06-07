1004 - Produto Simples
======================

Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável **PROD**. A seguir mostre a variável **PROD** com mensagem correspondente.   

Entrada
-------

O arquivo de entrada contém 2 valores inteiros.

Saída
-----

Imprima a mensagem "PROD" e a variável **PROD** conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade. Não esqueça de imprimir o fim de linha após o produto, caso contrário seu programa apresentará a mensagem: _“Presentation Error”_.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 3 <br/> 9           | PROD = 27         |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| -30 <br/> 10        | PROD = -300       |

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 0 <br/> 9           | PROD = 0          |

&nbsp;

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
