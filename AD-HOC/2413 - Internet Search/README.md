# 2413 - Busca na Internet

João fez uma pesquisa em seu site de busca predileto, e encontrou a resposta que estava procurando no terceiro link listado. Além disso, ele viu, pelo site, que t pessoas já haviam clicado neste link antes. João havia lido anteriormente, também na Internet, que o número de pessoas que clicam no segundo link listado é o dobro de número de pessoas que clicam no terceiro link listado. Nessa leitura, ele também descobriu que o número de pessoas que clicam no segundo link é a metade do número de pessoas que clicam no primeiro link.

João está intrigado para saber quantas pessoas clicaram no primeiro link da busca, e, como você é amigo dele, quer sua ajuda nesta tarefa.

## Entrada

Cada caso de teste possui apenas um número, t (1 ≤ t ≤ 1000), que representa o número de pessoas que clicaram no terceiro link da busca.

## Saída

Para cada caso de teste imprima apenas uma linha, contendo apenas um inteiro, indicando quantas pessoas clicaram no primeiro link, nessa busca.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 2                   | 8                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 25                  | 100               |

---

### C99

```c
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    printf("%i", t*4);

    return 0;
}
```

### C#

```csusing System;

class URI
{
    static void Main(string[] args)
    {
        int t = int.Parse(Cosole.ReadLine());
        Console.WriteLine($"{t*4}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        System.out.println(t*4);
        scan.close();
    }
}
```

### Python

```python
t = int(input())
print(t*4)
```
