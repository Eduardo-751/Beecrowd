<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1020 - Idade em Dias</h1>
        <div class="problem">
            <div class="description">
                <p>
                Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias</p>
                <p>
                Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.</p>
                </div>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém um valor inteiro.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a saída conforme exemplo fornecido.</p>
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
                                400</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                1 ano(s)<br />
                                1 mes(es)<br />
                                5 dia(s)</p>
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
                                800</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                2 ano(s)<br />
                                2 mes(es)<br />
                                10 dia(s)</p>
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
                                30</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                0 ano(s)<br />
                                1 mes(es)<br />
                                0 dia(s)</p>
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

    int dias, anos, meses;

    scanf("%i", &dias);

    anos = dias / 365;
    dias %= 365;
    meses = dias / 30;
    dias %= 30;

    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);

    return 0;
}
```
