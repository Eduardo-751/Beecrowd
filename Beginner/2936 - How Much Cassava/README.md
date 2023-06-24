# 1866 - Conta

Todo ano em abril reúnem-se na casa da dona Chica o Curupira, Boitatá, o Boto cor de rosa (esse em sua forma de homem, já que assim dona chica gosta mais), o Mapinguari e a Iara para se lembrar de seus momentos com Mani, a bela menina de pele branca. E como não poderia ser diferente o prato principal dessa reunião é a mandioca. Cada um deles come de uma a dez porções de mandioca e eles sempre avisam dona Chica com antecedência a respeito de quantas porções irão comer nesse dia. O tamanho da porção de cada um é diferente, mas sempre são os mesmos. As porções são as seguintes (em gramas):

- O Curupira come 300
- O Boitatá come 1500
- O Boto come 600
- O Mapinguari 1000
- A Iara come 150

Dona chica por sua vez sempre come 225 gramas de mandioca. Cansada de todo ano ter que calcular quanta mandioca preparar ela contactou você para escrever um programa que informe quanta mandioca deve ser preparada em gramas.

## Entrada

A entrada consiste de 5 inteiros cada um representando as porções que os convidados de dona Chica vão consumir. O primeiro inteiro representa as porções do Curupira, o segundo do Boitatá, o terceiro do Boto, o quarto do Mapinguari e o quinto a da Iara.

## Saída

A saída consiste de um único inteiro que representa quanta mandioca dona Chica deve preparar em gramas. Não esqueça da quebra de linha após a resposta.

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 1                  | 3775             |
| 1                  |                  |
| 1                  |                  |
| 1                  |                  |
| 1                  |                  |

| Exemplo de Entrada | Exemplo de Saída |
| ------------------ | ---------------- |
| 2                  | 7325             |
| 2                  |                  |
| 2                  |                  |
| 2                  |                  |
| 2                  |                  |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    int table[5] = {300, 1500, 600, 1000, 150};
    int gramas = 225;

    for(int i = 0; i<5; i++){
        int aux;
        scanf("%i", &aux);
        gramas += table[i]*aux;
    }
    printf("%i\n", gramas);
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
        int[] table = {300, 1500, 600, 1000, 150};
        int gramas = 225;

        for(int i = 0; i<5; i++){
            int aux = int.Parse(Console.ReadLine());
            gramas += table[i]*aux;
        }
        Console.WriteLine(gramas);
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int[] table = {300, 1500, 600, 1000, 150};
        int gramas = 225;
        Scanner scanner = new Scanner(System.in);
        
        for(int i = 0; i<5; i++){
            int aux = scanner.nextInt();
            gramas += table[i]*aux;
        }
        System.out.println(gramas);
        scanner.close();
    }
}
```

### Python 3.9

```py
table = [300, 1500, 600, 1000, 150]
gramas = 225
i = 0

while i < 5:
    gramas += table[i] * int(input());
    i += 1
    
print(gramas);

```
