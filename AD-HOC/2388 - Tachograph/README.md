# 2388 - Tacógrafo

Tacógrafos são dispositivos instalados em determinados tipos de veículos, que registram a velocidade, tempo e distância percorrida por tal veículo. É utilizada principalmente em veículos de transporte coletivo e de transporte de cargas, assim ajudando a evitar abusos de velocidade por parte dos motoristas.

A empresa SBC (Sociedade Brasileira dos Caminhoneiros) decidiu encomendar uma versão um pouco mais básica (e barata) para seus associados não precisarem gastar tanto na instalação desses aparelhos. Essas versões modificadas registram apenas os intervalos de tempo e as velocidades médias do caminhão naqueles intervalos.

Apesar das restrições dos aparelhos novos, a SBC quer poder saber qual foi a distância percorrida pelos caminhões. Você deverá escrever um programa que recebe uma série de intervalos de tempo com suas respectivas velocidades médias e calcula qual foi a distância total percorrida pelo caminhão de acordo com o tacógrafo.

## Entrada

A primeira linha da entrada contém um inteiro **N** (1 ≤ **N** ≤ 1000) representando a quantidade de intervalos de tempo registrados no tacógrafo. As **N** linhas seguintes descrevem os intervalos de tempo. Cada uma dessas linhas possui dois inteiros **T** e **V** (1 ≤ **T** ≤ 100, 0 ≤ **V** ≤ 120), que representam, respectivamente o tempo decorrido (em horas) e a velocidade média (em quilômetros por hora) no intervalo de tempo.

## Saída

Seu programa deve imprimir uma única linha, contendo um único número inteiro representando a distância total percorrida, em quilômetros.

&nbsp;

| Exemplos de Entrada          | Exemplos de Saída |
| ---------------------------- | ----------------- |
| 3<br>10 0<br>55 12<br>75 120 | 9660              |

| Exemplos de Entrada                                                                           | Exemplos de Saída |
| --------------------------------------------------------------------------------------------- | ----------------- |
| 10<br>45 46<br>46 101<br>7 2<br>95 104<br>12 107<br>78 29<br>10 26<br>52 86<br>13 79<br>1 107 | 26022             |

| Exemplos de Entrada                                                      | Exemplos de Saída |
| ------------------------------------------------------------------------ | ----------------- |
| 8<br>37 24<br>68 69<br>28 26<br>79 8<br>36 0<br>50 71<br>13 68<br>87 113 | 21205             |

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
