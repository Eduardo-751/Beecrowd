# 2702 - Escolha Difícil

Em um longo voo, companhias aéreas oferecem uma refeição aos seus passageiros. Geralmente as aeromoças conduzem carrinhos contendo as refeições pelos corredores do avião. Quando o carrinho chega em sua fileira, você é questionado imediatamente: “Frango, bife, ou massa?”. Você sabe suas opções, mas você tem apenas alguns segundos para escolher e você não sabe qual a aparência de sua escolha pois seu vizinho ainda não abriu o embrulho…

A aeromoça deste voo decidiu alterar o procedimento. Primeiro ela vai perguntar a todos os passageiros qual sua escolha de refeição, e depois vai checar se o número de refeições disponíveis neste voo para cada escolha é suficiente.

Por exemplo, considere que o número de refeições de frango, bife e massa disponíveis são respectivamente (80, 20, 40), enquanto o número de passageiros que escolheu frango, bife e massa seja respectivamente (45,23, 48). Neste caso, onze pessoas seguramente ficaram sem suas respectivas escolhas de refeição, já que três passageiros que queriam bife e oito que gostariam de massa não poderão ser atendidos.

Dada a quantidade de refeições disponíveis para cada escolha e o número de refeições pedidas para cada escolha, você poderia por favor ajudar a aeromoça a determinar quantos passageiros seguramente não poderão ser atendidos?

## Entrada

A primeira linha contém três inteiros **Ca**, **Ba** e **Pa** (0 ≤ **Ca**, **Ba**, **Pa** ≤ 100), representando, respectivamente, o número de refeições disponíveis de frango, carne e massa. A segunda linha contém três inteiros **Cr**, **Br** e **Pr** (0 ≤ **Cr**, **Br**, **Pr** ≤ 100), indicando, respectivamente, o número de refeições requisitadas de frango, carne e massa.

## Saída

Imprima uma única linha com um número inteiro representando a quantidade de passageiros que seguramente não receberão sua escolha de refeição.

| Exemplo de Entrada      | Exemplo de Saída |
| ----------------------- | ---------------- |
| 80 20 40 </br> 45 23 48 | 11               |

| Exemplo de Entrada      | Exemplo de Saída |
| ----------------------- | ---------------- |
| 0 0 0 </br> 100 100 100 | 300              |

| Exemplo de Entrada     | Exemplo de Saída |
| ---------------------- | ---------------- |
| 41 42 43 </br>41 42 43 | 0                |

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    int Ca, Ba, Pa, Cr, Br, Pr;

    scanf("%i %i %i", &Ca, &Ba, &Pa);
    scanf("%i %i %i", &Cr, &Br, &Pr);

    int C = Cr-Ca;
    int B = Br-Ba;
    int P = Pr-Pa;

    int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

    printf("%i\n", R);

    return 0;
}
```

### C#

```cs
using System;

class URI {

    static void Main(string[] args) {

        int Ca, Ba, Pa, Cr, Br, Pr;

        string[] input = Console.ReadLine().Split(' ');
        Ca = int.Parse(input[0]);
        Ba = int.Parse(input[1]);
        Pa = int.Parse(input[2]);


        input = Console.ReadLine().Split(' ');
        Cr = int.Parse(input[0]);
        Br = int.Parse(input[1]);
        Pr = int.Parse(input[2]);

        int C = Cr-Ca;
        int B = Br-Ba;
        int P = Pr-Pa;

        int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

        Console.WriteLine(R);

    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int Ca, Ba, Pa, Cr, Br, Pr;

        Ca = scanner.nextInt();
        Ba = scanner.nextInt();
        Pa = scanner.nextInt();

        Cr = scanner.nextInt();
        Br = scanner.nextInt();
        Pr = scanner.nextInt();

        int C = Cr-Ca;
        int B = Br-Ba;
        int P = Pr-Pa;

        int R = (C > 0 ? C : 0) + (B > 0 ? B : 0) + (P > 0 ? P : 0);

        System.out.println(R);

        scanner.close();
    }
}
```

### Python 3.9

```py
available = list(map(int, input().split()))
requested = list(map(int, input().split()))

difference = [requested[i] - available[i] for i in range(3)]

R = (max(0, difference[0]) + max(0, difference[1]) + max(0, difference[2]))

print(R)
```
