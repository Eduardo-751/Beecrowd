<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1021 - Notas e Moedas</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém um valor de ponto flutuante <strong>N </strong>(0 ≤ <strong>N </strong>≤ 1000000.00).</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido. </p>
                    <p>Obs: Utilize ponto (.) para separar a parte decimal. </p>
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
                                576.73</p></p>
                            </p>
                        </td>
                        <td>
                            <p>
                                NOTAS:<br />
                                5 nota(s) de R$ 100.00<br />
                                1 nota(s) de R$ 50.00<br />
                                1 nota(s) de R$ 20.00<br />
                                0 nota(s) de R$ 10.00<br />
                                1 nota(s) de R$ 5.00<br />
                                0 nota(s) de R$ 2.00<br />
                                MOEDAS:<br />
                                1 moeda(s) de R$ 1.00<br />
                                1 moeda(s) de R$ 0.50<br />
                                0 moeda(s) de R$ 0.25<br />
                                2 moeda(s) de R$ 0.10<br />
                                0 moeda(s) de R$ 0.05<br />
                                3 moeda(s) de R$ 0.01</p>
                            </p>
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
                                4.00</p></p>
                            </p>
                        </td>
                        <td>
                            <p>
                                NOTAS:<br />
                                0 nota(s) de R$ 100.00<br />
                                0 nota(s) de R$ 50.00<br />
                                0 nota(s) de R$ 20.00<br />
                                0 nota(s) de R$ 10.00<br />
                                0 nota(s) de R$ 5.00<br />
                                2 nota(s) de R$ 2.00<br />
                                MOEDAS:<br />
                                0 moeda(s) de R$ 1.00<br />
                                0 moeda(s) de R$ 0.50<br />
                                0 moeda(s) de R$ 0.25<br />
                                0 moeda(s) de R$ 0.10<br />
                                0 moeda(s) de R$ 0.05<br />
                                0 moeda(s) de R$ 0.01</p>
                            </p>
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
                                91.01</p></p>
                            </p>
                        </td>
                        <td>
                            <p>
                                NOTAS:<br />
                                0 nota(s) de R$ 100.00<br />
                                1 nota(s) de R$ 50.00<br />
                                2 nota(s) de R$ 20.00<br />
                                0 nota(s) de R$ 10.00<br />
                                0 nota(s) de R$ 5.00<br />
                                0 nota(s) de R$ 2.00<br />
                                MOEDAS:<br />
                                1 moeda(s) de R$ 1.00<br />
                                0 moeda(s) de R$ 0.50<br />
                                0 moeda(s) de R$ 0.25<br />
                                0 moeda(s) de R$ 0.10<br />
                                0 moeda(s) de R$ 0.05<br />
                                1 moeda(s) de R$ 0.01</p>
                            </p>
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

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int reais, centavos;

    scanf("%d.%d", &reais, &centavos);
    reais = 100 * reais + centavos;

    printf("NOTAS:\n");
    for (int i = 0; i < 6; ++i)
    {
        printf("%d nota(s) de R$ %.2lf\n", reais / notas[i], notas[i] / 100.0);
        reais %= notas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; ++i)
    {
        printf("%d moeda(s) de R$ %.2lf\n", reais / moedas[i], moedas[i] / 100.0);
        reais %= moedas[i];
    }
    return 0;
}
```
