# 2374 - Pneu

Calibrar os pneus do carro deve ser uma tarefa cotidiana de todos os motoristas. Para isto, os postos de gasolina possuem uma bomba de ar. A maioria das bombas atuais são eletrônicas, permitindo que o motorista indique a pressão desejada num teclado. Ao ser ligada ao pneu, a bomba primeiro lê a pressão atual e calcula a diferença de pressão entre a desejada e a lida. Com esta diferença ela esvazia ou enche o pneu para chegar na pressão correta.

Sua ajuda foi requisitada para desenvolver o programa da próxima bomba da SBC - Sistemas de Bombas Computadorizadas.

Escreva um programa que, dada a pressão desejada digitada pelo motorista e a pressão do pneu lida pela bomba, indica a diferença entre a pressão desejada e a pressão lida.

## Entrada

A primeira linha da entrada contém um inteiro **N** que indica a pressão desejada pelo motorista (1 ≤ **N** ≤ 40). A segunda linha contém um inteiro **M** que indica a pressão lida pela bomba (1 ≤ **M** ≤ 40).

## Saída

Seu programa deve imprimir uma única linha, contendo a diferença entre a pressão desejada e a pressão lida.

### Example

| Input | Output |
| ----- | ------ |
| 30    | 12     |
| 18    |        |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    int N, M;

    scanf("%i", &N);
    scanf("%i", &M);

    printf("%i\n", N-M);

    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {

        int N = int.Parse(Console.ReadLine());
        int M = int.Parse(Console.ReadLine());

        Console.WriteLine($"{N-M}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int N = scan.nextInt();
        int M = scan.nextInt();

        System.out.println(N - M);
        scan.close();
    }
}
```

### Python

```python
N = int(input())
M = int(input())

print(N-M)
```
