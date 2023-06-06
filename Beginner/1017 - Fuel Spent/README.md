<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1017 - Gasto de Combustível</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Joaozinho quer calcular e mostrar a quantidade de litros de combustível gastos em uma viagem, ao utilizar um automóvel que faz 12 KM/L. Para isso, ele gostaria que você o auxiliasse através de um simples programa. Para efetuar o cálculo, deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h). Assim, pode-se obter distância percorrida e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com 3 casas decimais após o ponto.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas) e o segundo é a velocidade média durante a mesma (em km/h).</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Imprima a quantidade de litros necessária para realizar a viagem, com três dígitos após o ponto decimal</p>
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
                                10<br />
                                85</p>
                        </td>
                        <td>
                            <p>
                                70.833</p>
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
                                2<br />
                                92</p>
                        </td>
                        <td>
                            <p>
                                15.333</p>
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
                                22<br />
                                67</p>
                        </td>
                        <td>
                            <p>
                                122.833</p>
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

int main(){

    int a, b;
    double x;
    scanf("%i %i", &a, &b);
    x = (a*b)/12.0;
    printf("%.3lf\n", x);
    return 0;
}
```
