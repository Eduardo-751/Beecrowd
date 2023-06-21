# 1049 - Animal

Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1049_b.png)

## Entrada

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

## Saída

Imprima o nome do animal correspondente à entrada fornecida.

&nbsp;

| Exemplos de Entrada                     | Exemplos de Saída |
| --------------------------------------- | ----------------- |
| vertebrado <br/> mamifero <br/> onivoro | homem             |

| Exemplos de Entrada                  | Exemplos de Saída |
| ------------------------------------ | ----------------- |
| vertebrado <br/> ave <br/> carnivoro | aguia             |

| Exemplos de Entrada                       | Exemplos de Saída |
| ----------------------------------------- | ----------------- |
| invertebrado <br/> anelideo <br/> onivoro | minhoca           |

&nbsp;

### C99

```c
#include <string.h>
#include <stdio.h>

int main()
{
    char group[3][20];

    for (int i = 0; i < 3; ++i) {
        scanf("%s\n", &group[i]);
    }

    if (strcmp(group[0], "vertebrado") == 0) {
        if (strcmp(group[1], "ave") == 0) {
            if (strcmp(group[2], "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(group[1], "mamifero") == 0) {
            if (strcmp(group[2], "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(group[0], "invertebrado") == 0) {
        if (strcmp(group[1], "inseto") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(group[1], "anelideo") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("minhoca\n");
        }
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
        String input1 = Console.ReadLine();
        String input2 = Console.ReadLine();
        String input3 = Console.ReadLine();
        if (input1.Equals("vertebrado"))
        {
            if (input2.Equals("ave"))
            {
                if (input3.Equals("carnivoro"))
                    Console.WriteLine("aguia");
                else if (input3.Equals("onivoro"))
                    Console.WriteLine("pomba");
            }
            else if (input2.Equals("mamifero"))
            {
                if (input3.Equals("onivoro"))
                    Console.WriteLine("homem");
                else if (input3.Equals("herbivoro"))
                    Console.WriteLine("vaca");
            }
        }
        else if (input1.Equals("invertebrado"))
        {
            if (input2.Equals("inseto"))
            {
                if (input3.Equals("hematofago"))
                    Console.WriteLine("pulga");
                else if (input3.Equals("herbivoro"))
                    Console.WriteLine("lagarta");
            }
            else if (input2.Equals("anelideo"))
            {
                if (input3.Equals("hematofago"))
                    Console.WriteLine("sanguessuga");
                else if (input3.Equals("onivoro"))
                    Console.WriteLine("minhoca");
            }
        }
    }
}
```
