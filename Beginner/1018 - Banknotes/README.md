<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1018 - Cédulas</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre<strong> o valor lido </strong>e a relação de notas necessárias.</p>
                </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém um valor inteiro <strong>N </strong>(0 &lt; <strong>N </strong>&lt; 1000000).</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir o fim de linha após cada linha, caso contrário seu programa apresentará a mensagem: <em>“Presentation Error”</em>.</p>
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
                                576</p>
                        </td>
                        <td>
                            <p>
                                576<br />
                                5 nota(s) de R$ 100,00<br />
                                1 nota(s) de R$ 50,00<br />
                                1 nota(s) de R$ 20,00<br />
                                0 nota(s) de R$ 10,00<br />
                                1 nota(s) de R$ 5,00<br />
                                0 nota(s) de R$ 2,00<br />
                                1 nota(s) de R$ 1,00</p>
                        </td>
                    </tr>
                </tbody>
            </table>
            <table>
                <tbody>
                    <tr>
                        <td>Exemplos de Entrada</td>
                        <td>Exemplos de Saída</td>
                    </tr>
                    <tr>
                        <td class="division">
                            <p>
                                11257</p>
                        </td>
                        <td>
                            <p>
                                11257<br />
                                112 nota(s) de R$ 100,00<br />
                                1 nota(s) de R$ 50,00<br />
                                0 nota(s) de R$ 20,00<br />
                                0 nota(s) de R$ 10,00<br />
                                1 nota(s) de R$ 5,00<br />
                                1 nota(s) de R$ 2,00<br />
                                0 nota(s) de R$ 1,00</p>
                        </td>
                    </tr>
                </tbody>
            </table>
            <table>
                <tbody>
                    <tr>
                        <td>Exemplos de Entrada</td>
                        <td>Exemplos de Saída</td>
                    </tr>
                    <tr>
                        <td class="division">
                            <p>
                                503</p>
                        </td>
                        <td>
                            <p>
                                503<br />
                                5 nota(s) de R$ 100,00<br />
                                0 nota(s) de R$ 50,00<br />
                                0 nota(s) de R$ 20,00<br />
                                0 nota(s) de R$ 10,00<br />
                                0 nota(s) de R$ 5,00<br />
                                1 nota(s) de R$ 2,00<br />
                                1 nota(s) de R$ 1,00</p>
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
#include <math.h>

int main()
{

    int valor;

    scanf("%i", &valor);
    printf("%d nota(s) de R$ 100,00\n", valor / 100);
    valor %= 100;
    printf("%d nota(s) de R$ 50,00\n", valor / 50);
    valor %= 50;
    printf("%d nota(s) de R$ 20,00\n", valor / 20);
    valor %= 20;
    printf("%d nota(s) de R$ 10,00\n", valor / 10);
    valor %= 10;
    printf("%d nota(s) de R$ 5,00\n", valor / 5);
    valor %= 5;
    printf("%d nota(s) de R$ 2,00\n", valor / 2);
    valor %= 2;
    printf("%d nota(s) de R$ 1,00\n", valor);

    return 0;
}
```
