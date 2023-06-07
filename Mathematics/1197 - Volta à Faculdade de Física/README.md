1069 - Volta à Faculdade de Física
===========================

Uma partícula tem velocidade inicial e aceleração constante. Se a sua velocidade após certo momento é **v** então qual será seu deslocamento no dobro deste tempo?

Entrada
-------

A entrada contém vários casos de teste. Cada linha da entrada é um caso de teste e contém dois inteiros **v** (-100 ≤ **v** ≤ 100) e **t** (0 ≤ **t** ≤ 200) ( **t** significa o momento no qual a partícula ganha aquela velocidade). O final da entrada é determinado por EOF.

Saída
-----

Para cada linha de entrada imprima um único inteiro que denota o deslocamento no dobro do tempo fornecido.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída  |
|---------------------|--------------------|
| 0 0 <br/> 5 12      | 0 <br/>  120       |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        int s = v * (2 * t);
        printf("%d\n", s);
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
        string line;
        while ((line = Console.ReadLine()) != null)
        {
            string[] values = line.Split(' ');
            int v = int.Parse(values[0]);
            int t = int.Parse(values[1]);
            int s = v * (2 * t);
            Console.WriteLine(s);
        }
    }
}
```
