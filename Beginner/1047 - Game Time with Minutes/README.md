# 1047 - Tempo de Jogo com Minutos

Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo. A seguir calcule a duração do jogo.

_Obs:_ O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

## Entrada

Quatro números inteiros representando a hora de início e fim do jogo.

## Saída

Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” .

&nbsp;

| Exemplos de Entrada | Exemplos de Saída                    |
| ------------------- | ------------------------------------ |
| 7 8 9 10            | O JOGO DUROU 2 HORA(S) E 2 MINUTO(S) |

| Exemplos de Entrada | Exemplos de Saída                     |
| ------------------- | ------------------------------------- |
| 7 7 7 7             | O JOGO DUROU 24 HORA(S) E 0 MINUTO(S) |

| Exemplos de Entrada | Exemplos de Saída                     |
| ------------------- | ------------------------------------- |
| 7 10 8 9            | O JOGO DUROU 0 HORA(S) E 59 MINUTO(S) |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int hora1, min1, hora2, min2;
    scanf("%i %i %i %i", &hora1, &min1, &hora2, &min2);

    if(hora2<=hora1 && min2<=min1)
        hora2+=24;
    if(min2<min1){
        min2+=60;
        hora1++;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora2-hora1, min2-min1);

    return 0;
}
```

### C#

```cs
using System;

class URI {

    static void Main(string[] args) {

        string[] input = Console.ReadLine().Split(' ');
        int Start = int.Parse((input[0]*60)+input[1]);
        int End = int.Parse((input[2]*60)+input[3]);

        if(End<=Start)
            End+=1.440;

        Console.WriteLine($"O JOGO DUROU { (End-Start)/60 } HORA(S) E { (End-Start)%60 } MINUTO(S)");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String[] input = scanner.nextLine().split(" ");
        int start = Integer.parseInt(input[0]) * 60 + Integer.parseInt(input[1]);
        int end = Integer.parseInt(input[2]) * 60 + Integer.parseInt(input[3]);

        if (end <= start)
            end += 1440;

        int duration = end - start;
        int hours = duration / 60;
        int minutes = duration % 60;

        System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)%n", hours, minutes);

        scanner.close();
    }
}
```

### Python

```python
input_data = input().split(' ')
start = int(input_data[0]) * 60 + int(input_data[1])
end = int(input_data[2]) * 60 + int(input_data[3])

if end <= start:
    end += 1440

duration = end - start
hours = duration // 60
minutes = duration % 60

print(f"O JOGO DUROU {hours} HORA(S) E {minutes} MINUTO(S)")
```
