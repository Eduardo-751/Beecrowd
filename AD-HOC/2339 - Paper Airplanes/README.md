# 2374 - Aviões de Papel

Para descontrair os alunos após as provas da OBI, a Diretora da escola organizou um campeonato de aviões de papel. Cada aluno participante receberá uma certa quantidade de folhas de um papel especial para fazer os seus modelos de aviões. A quantidade de folhas que cada aluno deverá receber ainda não foi determinada: ela será decidida pelos juízes do campeonato.

A diretora convidou, para atuarem como juízes, engenheiros da Embraer, uma das mais bem sucedidas empresas brasileiras, que vende aviões com tecnologia brasileira no mundo todo. O campeonato está programado para começar logo após a prova da OBI, mas os juízes ainda não chegaram à escola. A diretora está aflita, pois comprou uma boa quantidade de folhas de papel especial, mas não sabe se a quantidade comprada vai ser suficiente.

Considere, por exemplo, que a Diretora comprou 100 folhas de papel especial, e que há 33 competidores. Se os juízes decidirem que cada competidor tem direito a três folhas de papel, a quantidade comprada pela diretora é suficiente. Mas se os juízes decidirem que cada competidor tem direito a quatro folhas, a quantidade comprada pela diretora não seria suficiente.

Você deve escrever um programa que, dados o número de competidores, o número de folhas de papel especial compradas pela Diretora e o número de folhas que cada competidor deve receber, determine se o número de folhas comprado pela Diretora é suficiente.

## Entrada

A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de entrada padrão (normalmente o teclado). O arquivo de entrada contém três números inteiros **C** (1 ≤ **C** ≤ 1000), **P** (1 ≤ **P** ≤ 1000) e **F** (1 ≤ **F** ≤ 1000) representando respectivamente o número de competidores, a quantidade de folhas de papel especial compradas pela Diretora e a quantidade de folhas de papel especial que cada competidor deve receber.

## Saída

Seu programa deve imprimir, na saída padrão, o caractere ‘S’ se a quantidade de folhas compradas pela Diretora é suficiente, ou o caractere ‘N’ caso contrário. Note que os caracteres devem ser letras maiúsculas.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 10 100 10           | S                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 10 90 10            | N                 |

| Exemplos de Entrada | Exemplos de Saída |
| ------------------- | ----------------- |
| 5 40 2              | S                 |

---

### C99

```c
#include <stdio.h>

int main()
{

    int C, P, F;

    scanf("%i %i %i", &C, &P, &F);

    if (C * F <= P)
        printf("S\n");
    else
        printf("N\n");

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

        string[] input = Console.ReadLine().Split(' ');
        int C = int.Parse(input[0]);
        int P = int.Parse(input[1]);
        int F = int.Parse(input[2]);

        if (C * F <= P)
            Console.WriteLine("S");
        else
            Console.WriteLine("N");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int C = scan.nextInt();
        int P = scan.nextInt();
        int F = scan.nextInt();

        if (C * F <= P)
            System.out.println("S");
        else
            System.out.println("N");
        scan.close();
    }
}

```

### Python

```python
C, P, F = map(int, input().split())

if(C*F <= P):
    print("S")
else:
    print("N")
```
