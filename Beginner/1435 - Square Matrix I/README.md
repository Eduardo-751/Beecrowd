# 1435 - Matriz Quadrada I

Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

## Entrada

A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem igual a zero (0).

## Saída

Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo. Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados à direita e separados por espaço. Após o último caractere de cada linha da matriz não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada uma linha em branco.

| Exemplo de Entrada | Exemplo de Saída |
|--------------------|-------------------|
| 1                  |   1               |
| 2                  |                   |
| 3                  |   1   1           |
| 4                  |   1   1           |
| 5                  |                   |
| 0                  |   1   1   1       |
|                    |   1   2   1       |
|                    |   1   1   1       |
|                    |                   |
|                    |   1   1   1   1   |
|                    |   1   2   2   1   |
|                    |   1   2   2   1   |
|                    |   1   1   1   1   |
|                    |                   |
|                    |   1   1   1   1   1 |
|                    |   1   2   2   2   1 |
|                    |   1   2   3   2   1 |
|                    |   1   2   2   2   1 |
|                    |   1   1   1   1   1 |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) break;

        int matrix[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int min = i;
                if (j < min) min = j;
                if (N - 1 - i < min) min = N - 1 - i;
                if (N - 1 - j < min) min = N - 1 - j;
                matrix[i][j] = min + 1;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j == 0)
                    printf("%3d", matrix[i][j]);
                else
                    printf(" %3d", matrix[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
```

### C#

```cs
using System; 

class URI {
    static void Main(string[] args)
    {
        string entrada;
        while ((entrada = Console.ReadLine()) != null)
        {
            int N = int.Parse(entrada);

            if (N == 0) {
                break;
            }
            for (int i = 0; i < N; ++i) {
                Console.Write((1).ToString().PadLeft(3));
                for (int j = 1; j < N; ++j)
                {
                    Console.Write((Math.Min(Math.Min(i, N - 1 - i), Math.Min(j, N - 1 - j)) + 1).ToString().PadLeft(4));
                }
                Console.WriteLine("");
            }
            Console.WriteLine("");
        }
    }   
}
```

### Java

```java
import java.io.IOException;
import java.util.Scanner;

class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        int n;
        while ((n = sc.nextInt()) != 0) {
            int[][] mat = new int[n][n];

            int x = (n + 1) / 2;
            int a = 0, b = n - 1;

            for (int l = 1; l <= x; l++) {
                for (int i = a; i <= b; i++) {
                    for (int j = a; j <= b; j++) {
                        mat[i][j] = l;
                    }
                }
                a++;
                b--;
            }
            printMatrix(mat);
        }
        sc.close();
    }
    
    private static void printMatrix(int[][] matrix) {
        StringBuilder sb = new StringBuilder();
        for (int[] mat : matrix) {
            for (int j = 0; j < mat.length; j++) {
                if (j == 0) {
                    sb.append(String.format("%3d", mat[j]));
                } else {
                    sb.append(String.format(" %3d", mat[j]));
                }
            }
            sb.append("\n");
        }
        sb.append("\n");
        System.out.print(sb.toString());
    }
}
```

### Python

```python
while True:
    N = int(input())
    if N == 0:
        break

    matrix = [[0] * N for _ in range(N)]

    for i in range(N):
        for j in range(N):
            matrix[i][j] = min(i, j, N - 1 - i, N - 1 - j) + 1

    for row in matrix:
        print(' '.join(f'{num:>3}' for num in row))
    print()
```
