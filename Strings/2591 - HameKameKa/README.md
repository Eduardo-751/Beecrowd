# 2591 - HameKameKa

O Hamekameka foi inventado por Mestre Hame praticado por cinquenta anos antes de conhecer Kogu. Chamando sua energia latente nas palmas de suas mãos, Hame consegue lançar um raio explosivo de energia. Kogu aprende após ver Mestre Hame usando-o para apagar as chamas na casa de um Rei. Para a surpresa de Hame, Kogu consegue performar a técnica de primeira, embora seja apenas forte o suficiente para destruir o carro que Chamya deu para Mulba. Kogu descobriu que há um padrão na pronúncia correta deste ataque, de modo que, se não for pronunciado corretamente, o mesmo não acontece.

Escreva um programa que, dada a parte inicial de um Hamekameka, faça a finalização ideal para que o ataque seja realizado com sucesso.

## Entrada

A entrada começa com um valor C, indicando a quantidade de casos de teste. Em seguida, temos C linhas, cada uma com o início de um ataque, com, no máximo, 200 letras.

## Saída

Para cada caso de teste, imprima a finalização adequada, para que o ataque se concretize.

### Example

| **Input**                                                   | **Output**                              |
| ----------------------------------------------------------- | --------------------------------------- |
| 4<br>hamekame<br>haamekaame<br>haaamekaame<br>haaaamekaaame | ka<br>kaaaa<br>kaaaaaa<br>kaaaaaaaaaaaa |

&nbsp;

### C99

```c
#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    scanf("%i", &C);

    for (int i = 0; i < C; i++)
    {
        char string[200];
        scanf("%s", &string);

        int aux = 0;
        int groupA1 = 0, groupA2 = 0;

        for (int i2 = 1; i2 < strlen(string); i2++)
        {
            if (string[i2] == 'a' && aux == 0)
                groupA1++;
            else
                aux = 1;
            if (string[i2] == 'a' && aux == 1)
                groupA2++;
        }
        printf("k");
        for (int i2 = 0; i2 < (groupA1 * groupA2); i2++)
        {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}

```

### C#

```cs
using System;

class Program
{
    static void Main()
    {
        int C = int.Parse(Console.ReadLine());
        for (int i = 0; i < C; i++)
        {
            string attack = Console.ReadLine();
            int group1 = attack.IndexOf('m') - 1;

            int group2 = attack.Substring(attack.IndexOf('k')).IndexOf('m') - 1;

            System.Text.StringBuilder result = new System.Text.StringBuilder();

            result.Append('k');
            for (int j = 0; j < group1 * group2; j++)
            {
                result.Append('a');
            }

            Console.WriteLine(result.ToString());
        }
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int C = scanner.nextInt();

        for (int i = 0; i < C; i++) {
            String attack = scanner.next();
            int group1 = attack.indexOf('m') - 1;

            int group2 = attack.substring(attack.indexOf('k')).indexOf('m') - 1;

            StringBuilder result = new StringBuilder();

            result.append('k');
            for (int j = 0; j < group1 * group2; j++) {
                result.append('a');
            }

            System.out.println(result.toString());
        }
        scanner.close();
    }
}
```

### Python

```python
C = int(input())
for _ in range(C):
    attack = input()
    group1 = attack.index('m') - 1
    group2 = attack.count('a', attack.index('k'))
    print('k' + 'a' * (group1 * group2))
```
