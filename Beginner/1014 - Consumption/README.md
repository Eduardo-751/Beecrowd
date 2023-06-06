<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1014 - Consumo</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Calcule o consumo médio de um automóvel sendo fornecidos a distância
                    total percorrida (em Km) e o total de combustível gasto (em litros).</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém dois valores: um valor inteiro <strong>X</strong> representando a distância total percorrida (em Km), e um valor real <strong>Y </strong>representando o total de combustível gasto, com um dígito após o ponto decimal.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".</p>
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
                                 500<br>
                                 35.0</p>
                        </td>
                        <td>
                            <p>
                                14.286 km/l</p>
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
                                2254<br>
                                 124.4</p>
                        </td>
                        <td>
                            <p>
                                18.119 km/l</p>
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
                                4554<br>
                                464.6</p>
                        </td>
                        <td>
                            <p>
                                9.802 km/l</p>
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

    int x;
    double y;
    scanf("%i %lf", &x, &y);
    printf("%.3lf km/l\n", x/y);
    return 0;
}
```
