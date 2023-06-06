<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1028 - Figurinhas</h1>
        <div class="problem">
            <div class="description">
                <p class="center">
                    Ricardo e Vicente são aficionados por figurinhas. Nas horas vagas, eles arrumam um jeito de jogar um “bafo” ou algum outro jogo que envolva tais figurinhas. Ambos também têm o hábito de trocarem as figuras repetidas com seus amigos e certo dia pensaram em uma brincadeira diferente. Chamaram todos os amigos e propuseram o seguinte: com as figurinhas em mãos, cada um tentava fazer uma troca com o amigo que estava mais perto seguindo a seguinte regra: cada um contava quantas figurinhas tinha. Em seguida, eles tinham que dividir as figurinhas de cada um em pilhas do mesmo tamanho, no maior tamanho que fosse possível para ambos. Então, cada um escolhia uma das pilhas de figurinhas do amigo para receber. Por exemplo, se Ricardo e Vicente fossem trocar as figurinhas e tivessem respectivamente 8 e 12 figuras, ambos dividiam todas as suas figuras em pilhas de 4 figuras (Ricardo teria 2 pilhas e Vicente teria 3 pilhas) e ambos escolhiam uma pilha do amigo para receber.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    A primeira linha da entrada contém um único inteiro <strong>N</strong> (1 ≤ <strong>N</strong> ≤ 3000), indicando o número de casos de teste. Cada caso de teste contém 2 inteiros <strong>F1</strong> (1 ≤ <strong>F1</strong> ≤ 1000) e <strong>F2</strong> (1 ≤ <strong>F2</strong> ≤ 1000) indicando, respectivamente, a quantidade de figurinhas que Ricardo e Vicente têm para trocar.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Para cada caso de teste de entrada haverá um valor na saída, representando o tamanho máximo da pilha de figurinhas que poderia ser trocada entre dois jogadores.</p>
            </div>
            <div class="both"></div>
            <table>
                <tbody>
                    <tr>
                        <td>Exemplos de Entrada</td>
                        <td>Exemplos de Saída</td>
                    </tr>
                    <tr>
                        <td class="division">
                            <p>
                                3<br>
                                8 12<br>
                                9 27<br>
                                259 111</p>
                        </td>
                        <td>
                            <p>
                                4<br>
                                9<br>
                                37</p>
                        </td>
                    </tr>
                </tbody>
            </table>
        </div>
    </div>
</body>
</html>

### C99

```c
#include <stdio.h>

int main()
{
    int N, F1, F2, MDC;
    (scanf("%i", &N) > 0);
    while (N > 0)
    {
        scanf("%i %i", &F1, &F2);
        do
        {
            MDC = F1 % F2;
            F1 = F2;
            F2 = MDC;
        } while (MDC != 0);
        printf("%i\n", F1);
        N--;
    }
    return 0;
}
```
