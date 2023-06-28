# 3048 - Sequência Secreta

Na calçada em frente ao Palácio Imperial, não se sabe a razão, existe uma sequência de **N** números desenhados no chão. **A** sequência tem a seguinte forma: ela começa e termina com o número **1**; apenas os números **1** e **2** aparecem nela; e o número **2** aparece pelo menos uma vez. Veja um exemplo na coluna **(a)** da figura ao lado. Ninguém sabe o significado da sequência e, justamente por isso, várias teorias malucas surgiram. Uma delas diz que a sequência representa, na verdade, apenas um valor que estaria relacionado a um segredo dos imperadores. Esse valor é a quantidade máxima de números da sequência que poderiam ser marcados com um círculo, de modo que a sequência de números marcados não contenha dois números iguais consecutivos. A coluna **(b)** da figura ao lado ilustra uma sequência de **4** números marcados que obedece a restrição acima. Só que é possível marcar **7** números, como mostra a coluna **(c)** da figura.

Neste problema, dada a sequência original de números desenhados no chão da calçada, seu programa deve computar e imprimir a quantidade máxima de números da sequência que poderiam ser marcados com um círculo sem que haja dois números iguais consecutivos na sequência marcada.

![Problem Image](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_3035.png)

## Entrada

A primeira linha da entrada contém um inteiro **N** representando o tamanho da sequência. As **N** linhas seguintes contêm, cada uma, um inteiro **V<sub>i</sub>**, para 1 ≤ i ≤ N, definindo a sequência de números desenhados no chão da calçada imperial.

## Saída

Seu programa deve imprimir uma linha contendo um número inteiro representando a quantidade máxima de números da sequência que poderiam ser marcados com um círculo sem que haja dois números iguais consecutivos na sequência marcada.

**Restrições**

- 3 ≤ N ≤ 500
- **V<sub>i</sub>** é igual a 1 ou 2, para 1 ≤ i ≤ N

&nbsp;

| Exemplos de Entrada                                            | Exemplos de Saída |
| -------------------------------------------------------------- | ----------------- |
| 5<br>1<br>1<br>1<br>2<br>1                                     | 3                 |
| 12<br>1<br>2<br>1<br>2<br>2<br>2<br>1<br>1<br>2<br>2<br>1<br>1 | 7                 |
| 3<br>1<br>2<br>1                                               | 3                 |

---

### C99

```c
#include <stdio.h>

int main() {

    int N, V,sequence = 0, aux = 0;

    scanf("%i", &N);
    for(int i=0; i<N; i++){
        scanf("%i", &V);
        if(V!=aux){
            aux = V;
            sequence++;
        }
    }

    printf("%i\n", sequence);
    return 0;
}
```

### C#

```cs
using System;

class URI {
    static void Main(string[] args) {

        int sequence = 0, aux = 0;
        int N = int.Parse(Console.ReadLine());
        for(int i=0; i<N; i++){
            int V = int.Parse(Console.ReadLine());
            if(V!=aux){
                aux=V;
                sequence++;
            }
        }
        Console.WriteLine($"{sequence}");
    }
}
```

### Java

```java
import java.util.Scanner;

class Main {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int sequence = 0, aux = 0;
        int N = scan.nextInt();
        for(int i=0; i<N; i++){
            int V = scan.nextInt();
            if(V!=aux){
                aux=V;
                sequence++;
            }
        }
        System.out.println(sequence);
        scan.close();
    }
}
```

### Python

```python
N = int(input())

aux = int(0)
sequence = int(0)

for i in range (N):
    V = int(input())
    if V!=aux:
        aux=V
        sequence+=1

print(sequence)
```
