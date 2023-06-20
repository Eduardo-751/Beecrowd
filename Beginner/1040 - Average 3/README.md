1040 - Média 3
==============

Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem _"Media: "_. Se esta média for maior ou igual a 7.0, imprima a mensagem _"Aluno aprovado."_. Se a média calculada for inferior a 5.0, imprima a mensagem _"Aluno reprovado."_. Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem _"Aluno em exame."_.

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. Imprima então a mensagem _"Nota do exame: "_ acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem _"Aluno aprovado."_ (caso a média final seja 5.0 ou mais ) ou _"Aluno reprovado."_, (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem _"Media final: "_ seguido da média final para esse aluno.

Entrada
-------

A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.

Saída
-----

Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descrição do problema. Não esqueça de imprimir o _enter_ após o final de cada linha, caso contrário obterá "Presentation Error".

&nbsp;

| Exemplos de Entrada       | Exemplos de Saída           |
|---------------------------|-----------------------------|
| 2.0 4.0 7.5 8.0 <br/> 6.4 | Media: 5.4 <br/> Aluno em exame. <br/> Nota do exame: 6.4 <br/> Aluno aprovado. <br/> Media final: 5.9 |

| Exemplos de Entrada | Exemplos de Saída                 |
|---------------------|-----------------------------------|
| 2.0 6.5 4.0 9.0     | Media: 4.8 <br/> Aluno reprovado. |

| Exemplos de Entrada | Exemplos de Saída                |
|---------------------|----------------------------------|
| 9.0 4.0 8.5 9.0     | Media: 7.3 <br/> Aluno aprovado. |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>


int main(){

    double m1, m2, m3, m4, med1, med2, medfinal;
    scanf("%lf %lf %lf %lf", &m1, &m2, &m3, &m4);
    med1 =(m1*0.2)+(m2*0.3)+(m3*0.4)+(m4*0.1);
    printf("Media: %.1lf\n", med1);
    if(med1>=7){
        printf("Aluno aprovado.\n");
    }
    else if(med1>=5 && med1<7){
        printf("Aluno em exame.\n");
        scanf("%lf", &med2);
        printf("Nota do exame: %.1lf\n", med2);
        medfinal = (med1+med2)/2;
        if(medfinal >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medfinal);
    }
    else
        printf("Aluno reprovado.\n");
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
        double N1 = double.Parse(input[0]);
        double N2 = double.Parse(input[1]);
        double N3 = double.Parse(input[2]);
        double N4 = double.Parse(input[3]);

        double media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.01;

        Console.WriteLine($"Media: {media:0.0}");
        if (media >= 7)
            Console.WriteLine("Aluno aprovado.");
        else if (media < 4.995)
            Console.WriteLine("Aluno reprovado.");
        else
        {
            Console.WriteLine("Aluno em exame.");

            double exame = double.Parse(Console.ReadLine());
            Console.WriteLine($"Nota do exame: {exame:0.0}");
            double mediaF = (media + exame) / 2;
            if (mediaF >= 5)
                Console.WriteLine("Aluno aprovado.");
            else
                Console.WriteLine("Aluno reprovado.");

            Console.WriteLine($"Media final: {mediaF:0.0}");
        }
    }
}
```