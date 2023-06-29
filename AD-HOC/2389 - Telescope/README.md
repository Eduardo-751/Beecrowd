# 2386 - Telescópio

Telescópios são instrumentos que auxiliam na observação do céu, melhorando e ampliando a visão das estrelas, planetas e outros objetos brilhantes. Existem diferentes tipos de telescópios, sendo os mais comuns os refratores (com lentes objetivas) e os refletores (com espelhos).

A forma como os telescópios melhoram nossa percepção dos corpos celestes no céu é aumentando a quantidade de luz capturada que chega aos nossos olhos. Toda a luz que entra em nossos olhos passa por um orifício chamado pupila. A pupila controla a quantidade de luz que entra nos olhos, aumentando o diâmetro quando o ambiente está escuro (e, portanto, precisamos obter mais luz para identificar os objetos) e diminuindo quando o ambiente está claro. Em um ambiente muito escuro, a pupila pode atingir um diâmetro de 8 mm.

Cada objeto celeste (estrela, planeta, nebulosa, etc.) emite uma quantidade de luz (fótons) que é distribuída uniformemente quando chega à Terra. Por exemplo, a estrela A emite luz que pode ser capturada com um fluxo de 40.000 fótons por segundo por milímetro quadrado. Isso significa que a cada segundo é possível capturar 40.000 fótons provenientes da estrela A em uma área de 1 mm². Ou seja, uma pupila de 10 mm² de área capturaria 400.000 fótons provenientes da estrela A por segundo.

No entanto, para que nosso cérebro consiga interpretar a presença de um objeto, ele precisa receber 40.000.000 fótons por segundo. Portanto, podemos usar um telescópio com uma lente (ou espelho) de 100 mm² de área, que capturará a quantidade necessária de fótons provenientes da estrela A e os direcionará até nossa pupila, fazendo com que nosso cérebro perceba a presença da estrela.

Dada uma lista de estrelas no céu, o fluxo de fótons que cada uma delas emite e a área de abertura de um telescópio, você deve determinar quantas estrelas serão perceptíveis ao usar esse telescópio.

## Entrada

A entrada consiste em duas linhas. A primeira linha contém um número inteiro A (1 ≤ A ≤ 10.000), representando a área de abertura do telescópio em milímetros quadrados. A segunda linha contém um número inteiro N (1 ≤ N ≤ 10.000), representando o número de estrelas a serem estudadas. As próximas N linhas contêm um número inteiro F (1 ≤ F ≤ 20.000), representando o fluxo de fótons emitido por cada uma das N estrelas (em fótons por segundo por milímetro quadrado).

## Saída

Imprima um número inteiro representando a quantidade de estrelas que serão perceptíveis ao usar o telescópio em questão.

&nbsp;


| Exemplos de Entrada                | Exemplos de Saída |
| ---------------------------------- | ----------------- |
| 10000<br>3<br>4000<br>3500<br>5100 | 2                 |

| Exemplos de Entrada                | Exemplos de Saída |
| ---------------------------------- | ----------------- |
| 5869<br>3<br>3975<br>14234<br>8569 | 2                 |

| Exemplos de Entrada                                                                      | Exemplos de Saída |
| ---------------------------------------------------------------------------------------- | ----------------- |
| 2967<br>9<br>18650<br>18338<br>2400<br>17702<br>14619<br>13934<br>7979<br>16316<br>10533 | 6                 |

---

### C99

```c
#include <stdio.h>

int main()
{

    int A, N, F, views = 0;

    scanf("%i", &A);
    scanf("%i", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%i", &F);
        if (F * A >= 40000000)
            views++;
    }

    printf("%i\n", views);
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
        int A, N, F, views = 0;

        A = int.Parse(Console.ReadLine());
        N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            F = int.Parse(Console.ReadLine());
            if (F * A >= 40000000)
                views++;
        }
        Console.WriteLine(views);
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int A, N, F, views = 0;

        A = Integer.parseInt(scanner.nextLine());
        N = Integer.parseInt(scanner.nextLine());

        for (int i = 0; i < N; i++) {
            F = Integer.parseInt(scanner.nextLine());
            if (F*A >= 40000000)
                views++;
        }
        System.out.println(views);
        scanner.close();
    }
}
```

### Python

```python
A = int(input())
N = int(input())

views = int(0)

for i in range(N):
    F = int(input())
    if F*A >= 40000000:
        views += 1

print(views)
```
