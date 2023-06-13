1089 - Loop Musical
===================

Um _loop musica_l é um trecho de música que foi composto para repetir continuamente (ou seja, o trecho inicia novamente toda vez que chega ao final), sem que se note descontinuidade. Loops são muito usados na sonorização de jogos, especialmente jogos casuais pela internet.

Loops podem ser digitalizados por exemplo utilizando PCM. PCM, do inglês Pulse Code Modulation, é uma técnica para representação de sinais analógicos, muito utilizada em áudio digital. Nessa técnica, a magnitude do sinal é amostrada a intervalos regulares de tempo, e os valores amostrados são armazenados em sequência. Para reproduzir a forma de onda amostrada, o processo é invertido (demodulação).

Fernandinha trabalha para uma empresa que desenvolve jogos e compôs um bonito loopmusical, codificando-o em PCM. Analisando a forma de onda do seu loop em um software de edição de áudio, Fernandinha ficou curiosa ao notar a quantidade de “picos” existentes. Um pico em uma forma de onda é um valor de uma amostra que representa um máximo ou mínimo local, ou seja, um ponto de inflexão da forma de onda. A figura abaixo ilustra (a) um exemplo de forma de onda e (b) o loop formado com essa forma de onda, contendo 48 picos.

![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1089_pt.png)

Fernandinha é uma amiga muito querida e pediu sua ajuda para determinar quantos picos existem no seu loop musical.

Entrada
-------

A entrada contém vários casos de teste. A primeira linha de um caso de teste contém um inteiro _**N**_, representando o número de amostras no loop musical de Fernandinha (_2 ≤ N ≤ 104_). A segunda linha contém _**N**_ inteiros _Hi_, separados por espaços, representando a sequência de magnitudes das amostras(_\-104 ≤ Hi ≤ 104_ para _1 ≤ i ≤ N_, _H1 ≠ HN_ e _Hi ≠ Hi+1_ para _1 ≤ i < N_). Note que _H1_ segue _HN_ quando o loop é reproduzido.

O final da entrada é indicado por uma linha que contém apenas o número zero.

Saída
-----

Para cada caso de teste da entrada seu programa deve imprimir uma única linha, contendo apenas um inteiro, o número de picos existentes no loop musical de Fernandinha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 2 <br/> 1 -3 <br/> 6 <br/> 40 0 -41 0 41 42 <br/> 4 <br/> 300 450 449 450 <br/> 0 | 2 <br/> 2 <br/> 4 |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    int T = 1, i, t1, t2, ondas = 0, V[10000];
    while (T != 0)
    {
        scanf("%i", &T);
        if (T != 0)
        {
            for (i = 0; i < T; i++)
                scanf("%i", &V[i]);
            V[T] = V[0];
            V[T + 1] = V[1];
            for (i = 1; i < T + 1; i++)
            {
                t1 = i + 1;
                t2 = i - 1;
                if (V[i] > V[t1] && V[i] > V[t2])
                    ondas++;
                if (V[i] < V[t1] && V[i] < V[t2])
                    ondas++;
            }
            printf("%i\n", ondas);
            ondas = 0;
        }
    }
    return 0;
}
```
### C#

```cs
using System; 

class URI {

    static void Main(string[] args) { 
        int N = 1;
        while (N != 0)
        {
            N = int.Parse(Console.ReadLine());
    
            if (N == 0)
                break;

            int[] samples = new int[N];

            samples = int.Parse(Console.ReadLine().Split(' '));

            int waves = 0;

            for (int i = 1; i < N - 1; i++)
            {
                if ((samples[i] > samples[i - 1] && samples[i] > samples[i + 1]) || (samples[i] < samples[i - 1] && samples[i] < samples[i + 1]))
                    waves++;
            }

            Console.WriteLine(waves);
        }
    }
}
```