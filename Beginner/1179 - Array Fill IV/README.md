# 1179 - Preenchimento de Vetor IV

Neste problema você deverá ler 15 valores e colocá-los em 2 vetores, separando os valores pares e ímpares. Cada vetor tem um tamanho fixo de 5 posições. Portanto, cada vez que um dos vetores ficar cheio, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números lidos. Ao final da leitura, você deve imprimir o conteúdo restante de cada um dos vetores, começando pelo vetor de ímpares.

## Entrada

A entrada contém 15 números inteiros.

## Saída

Imprima a saída conforme o exemplo abaixo.

| Exemplo de Entrada                                                              | Exemplo de Saída                                                                                                                                                                                                                     |
| ------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| 1<br>3<br>4<br>-4<br>2<br>3<br>8<br>2<br>5<br>-7<br>54<br>76<br>789<br>23<br>98 | par[0] = 4<br>par[1] = -4<br>par[2] = 2<br>par[3] = 8<br>par[4] = 2<br>impar[0] = 1<br>impar[1] = 3<br>impar[2] = 3<br>impar[3] = 5<br>impar[4] = -7<br>impar[0] = 789<br>impar[1] = 23<br>par[0] = 54<br>par[1] = 76<br>par[2] = 98 |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{

    int i, i2, N, odd = 0, even = 0;
    int oddV[5], EvenV[5];

    for (i = 0; i < 15; i++)
    {
        scanf("%i", &N);
        if (N % 2 == 0)
        {
            EvenV[even] = N;
            even++;
            if (even == 5)
            {
                for (i2 = 0; i2 < even; i2++)
                {
                    printf("par[%i] = %i\n", i2, EvenV[i2]);
                }
                even = 0;
            }
        }
        else
        {
            oddV[odd] = N;
            odd++;
            if (odd == 5)
            {
                for (i2 = 0; i2 < odd; i2++)
                {
                    printf("impar[%i] = %i\n", i2, oddV[i2]);
                }
                odd = 0;
            }
        }
    }
    for (i2 = 0; i2 < odd; i2++)
    {
        printf("impar[%i] = %i\n", i2, oddV[i2]);
    }
    for (i2 = 0; i2 < even; i2++)
    {
        printf("par[%i] = %i\n", i2, EvenV[i2]);
    }
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
        int[] oddV = new int[5];
        int[] evenV = new int[5];
        int oddIndex = 0;
        int evenIndex = 0;

        for (int i = 0; i < 15; i++)
        {
            int N = int.Parse(Console.ReadLine());

            if (N % 2 == 0)
            {
                evenV[evenIndex] = N;
                evenIndex++;

                if (evenIndex == 5)
                {
                    for (int j = 0; j < evenIndex; j++)
                    {
                        Console.WriteLine($"par[{j}] = {evenV[j]}");
                    }

                    evenIndex = 0;
                }
            }
            else
            {
                oddV[oddIndex] = N;
                oddIndex++;

                if (oddIndex == 5)
                {
                    for (int j = 0; j < oddIndex; j++)
                    {
                        Console.WriteLine($"impar[{j}] = {oddV[j]}");
                    }

                    oddIndex = 0;
                }
            }
        }
        for (int i = 0; i < oddIndex; i++)
        {
            Console.WriteLine($"impar[{i}] = {oddV[i]}");
        }

        for (int i = 0; i < evenIndex; i++)
        {
            Console.WriteLine($"par[{i}] = {evenV[i]}");
        }
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
        int[] oddV = new int[5];
        int[] evenV = new int[5];
        int oddIndex = 0, evenIndex = 0;

        InputStreamReader ir = new InputStreamReader(System.in);
        BufferedReader in = new BufferedReader(ir);

        for (int i = 0; i < 15; i++) {
            int N = Integer.parseInt(in.readLine());

            if (N % 2 == 0) {
                evenV[evenIndex] = N;
                evenIndex++;

                if (evenIndex == 5) {
                    for (int j = 0; j < evenIndex; j++) {
                        System.out.println("par[" + j + "] = " + evenV[j]);
                    }

                    evenIndex = 0;
                }
            } else {
                oddV[oddIndex] = N;
                oddIndex++;

                if (oddIndex == 5) {
                    for (int j = 0; j < oddIndex; j++) {
                        System.out.println("impar[" + j + "] = " + oddV[j]);
                    }

                    oddIndex = 0;
                }
            }
        }

        for (int i = 0; i < oddIndex; i++) {
            System.out.println("impar[" + i + "] = " + oddV[i]);
        }

        for (int i = 0; i < evenIndex; i++) {
            System.out.println("par[" + i + "] = " + evenV[i]);
        }
    }
}
```

### Python

```python
par = []
impar = []

for _ in range(15):
    numero = int(input())

    if numero % 2 == 0:
        par.append(numero)
        if len(par) == 5:
            for i in range(5):
                print(f"par[{i}] = {par[i]}")
            par = []
    else:
        impar.append(numero)
        if len(impar) == 5:
            for i in range(5):
                print(f"impar[{i}] = {impar[i]}")
            impar = []

for i in range(len(impar)):
    print(f"impar[{i}] = {impar[i]}")

for i in range(len(par)):
    print(f"par[{i}] = {par[i]}")
```
