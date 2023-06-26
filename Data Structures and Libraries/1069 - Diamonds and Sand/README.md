# 1069 - Diamantes e Areia

João está trabalhando em uma mina, tentando retirar o máximo que consegue de diamantes "<>". Ele deve excluir todas as particulas de areia "." do processo e a cada retirada de diamante, novos diamantes poderão se formar. Se ele tem como uma entrada .<...<<..>>....>....>>>., três diamantes são formados. O primeiro é retirado de <..>, resultando  .<...<>....>....>>>. Em seguida o segundo diamante é retirado, restando .<.......>....>>>. O terceiro diamante é então retirado, restando no final .....>>>., sem possibilidade de extração de novo diamante.

## Entrada

Deve ser lido um valor inteiro **N** que representa a quantidade de casos de teste. Cada linha a seguir é um caso de teste que contém até 1000 caracteres, incluindo "**<**,**\>**, **.**"

## Saída

Você deve imprimir a quantidade de diamantes possíveis de serem extraídos em cada caso de entrada.

&nbsp;

| Exemplos de Entrada                             | Exemplos de Saída |
| ----------------------------------------------- | ----------------- |
| 2 <br/> <..><.<..>> <br/> <<<..<......<<<<....> | 3 <br/> 1         |

&nbsp;

### C99

```c
#include <stdio.h>
#include <string.h>

int main(){

	int N, i, i2, i3;
	char Pilha[2048];
	int diamonds;

	scanf("%d", &N);

	for(i=0; i<N; i++){
        scanf("%s",Pilha);
		diamonds = 0;
		for (i2 = 0; Pilha[i2] != '\0'; i2++) {
         	if (Pilha[i2] == '<')
                for (i3 = i2; Pilha[i3] != '\0'; i3++) {
                    if (Pilha[i3] == '>'){
                        diamonds++;
                        Pilha[i3] = '.';
                        break;
                    }
                }
        }
		printf("%i\n", diamonds);
   	}
}
```

### C#

```cs
using System;

class URI
{
    static void Main(string[] args)
    {
        int N, i, i2, i3;
        char[] Pilha = new char[2048];
        int diamonds;

        N = int.Parse(Console.ReadLine());

        for (i = 0; i < N; i++)
        {
            string input = Console.ReadLine();
            Pilha = input.ToCharArray();
            diamonds = 0;

            for (i2 = 0; i2 < Pilha.Length; i2++)
            {
                if (Pilha[i2] == '<')
                {
                    for (i3 = i2; i3 < Pilha.Length; i3++)
                    {
                        if (Pilha[i3] == '>')
                        {
                            diamonds++;
                            Pilha[i3] = '.';
                            break;
                        }
                    }
                }
            }
            Console.WriteLine(diamonds);
        }
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        try (Scanner scan = new Scanner(System.in)) {
            int N, i, i2, i3;
            char[] Pilha = new char[2048];
            int diamonds;

            N = Integer.parseInt(scan.nextLine());

            for (i = 0; i < N; i++) {
                String input = scan.nextLine();
                Pilha = input.toCharArray();
                diamonds = 0;

                for (i2 = 0; i2 < Pilha.length; i2++) {
                    if (Pilha[i2] == '<') {
                        for (i3 = i2; i3 < Pilha.length; i3++) {
                            if (Pilha[i3] == '>') {
                                diamonds++;
                                Pilha[i3] = '.';
                                break;
                            }
                        }
                    }
                }
                System.out.println(diamonds);
            }
            scan.close();
        }
    }
}
```

### Python

```python
N = int(input())

for _ in range(N):
    input_str = input()
    Pilha = list(input_str)
    diamonds = 0

    for i2 in range(len(Pilha)):
        if Pilha[i2] == '<':
            for i3 in range(i2, len(Pilha)):
                if Pilha[i3] == '>':
                    diamonds += 1
                    Pilha[i3] = '.'
                    break

    print(diamonds)
```
