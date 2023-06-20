# 1001 - Extremamente Básico

Leia dois números inteiros e armazene-os nas variáveis A e B. Realize a soma de A e B, armazenando o resultado na variável X. Imprima X de acordo com o exemplo abaixo. Não imprima nenhuma mensagem extra, apenas o resultado conforme especificado, e lembre-se de imprimir a quebra de linha após o resultado, caso contrário, você receberá um "Erro de Apresentação".

## Entrada

A entrada contém 2 números inteiros.

## Saída

Imprima a mensagem "X = " (letra X maiúscula) seguida pelo valor da variável X e pelo caractere de quebra de linha. Certifique-se de ter um espaço antes e depois do sinal de igual, conforme mostrado no exemplo abaixo.

## Examples

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 10<br>9             | X = 19            |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| -10<br>4            | X = -6            |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 15<br>-7            | X = 8             |

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

### Python 3.9

```python
A = int(input())
B = int(input())

print(f"X = {A + B}")

```
