# 2374 - Pneu

Calibrar os pneus do carro deve ser uma tarefa cotidiana de todos os motoristas. Para isto, os postos de gasolina possuem uma bomba de ar. A maioria das bombas atuais são eletrônicas, permitindo que o motorista indique a pressão desejada num teclado. Ao ser ligada ao pneu, a bomba primeiro lê a pressão atual e calcula a diferença de pressão entre a desejada e a lida. Com esta diferença ela esvazia ou enche o pneu para chegar na pressão correta.

Sua ajuda foi requisitada para desenvolver o programa da próxima bomba da SBC - Sistemas de Bombas Computadorizadas.

Escreva um programa que, dada a pressão desejada digitada pelo motorista e a pressão do pneu lida pela bomba, indica a diferença entre a pressão desejada e a pressão lida.

## Entrada

A primeira linha da entrada contém um inteiro **N** que indica a pressão desejada pelo motorista (1 ≤ **N** ≤ 40). A segunda linha contém um inteiro **M** que indica a pressão lida pela bomba (1 ≤ **M** ≤ 40).

## Saída

Seu programa deve imprimir uma única linha, contendo a diferença entre a pressão desejada e a pressão lida.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 30                  | 12                |
| 18                  |                   |

---

### C99

```c
#include <stdio.h>

int main()
{
    int N, T, V, dist=0;
    scanf("%i", &N);
    for(int i=0; i<N; i++){
        scanf("%i %i", &T, &V);
        dist += T*V;
    }
    printf("%i\n", dist);
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
        int dist=0;
        int N = int.Parse(Console.ReadLine());
        for(int i=0; i<N; i++){
            string[] input = Console.ReadLine().Split(' ');
            int T = int.Parse(input[0]);
            int V = int.Parse(input[1]);
            dist += T*V;
        }
        Console.WriteLine(dist);
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int N = Integer.parseInt(scanner.nextLine());
        int dist = 0;
        for (int i = 0; i < N; i++) {
            String[] input = scanner.nextLine().split(" ");
            int T = Integer.parseInt(input[0]);
            int V = Integer.parseInt(input[1]);
            dist += T * V;
        }

        System.out.println(dist);
        scanner.close();
    }
}
```

### Python

```python
dist = 0
N = int(input())

for i in range(N):
    input_values = input().split()
    T = int(input_values[0])
    V = int(input_values[1])
    dist += T * V

print(dist)
```
