<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1015 - Distância Entre Dois Pontos</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:</p>
                    <P>
                    Distancia =<img alt="" src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1015.png" style="width: 180px; height: 23px;" /></p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: <em><strong>x1 y1</strong></em> e a segunda linha contém dois valores de ponto flutuante <em><strong>x2 y2</strong></em>.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.</p>
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
                                1.0 7.0<br />
                                5.0 9.0</p>
                        </td>
                        <td>
                            <p>
                                4.4721</p>
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
                                -2.5 0.4<br />
                                12.1 7.3</p>
                        </td>
                        <td>
                            <p>
                                16.1484</p>
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
                                2.5 -0.4<br />
                                -12.2 7.0</p>
                        </td>
                        <td>
                            <p>
                                16.4575</p>
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

    double x1, y1, x2, y2, distancia, m1, m2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    m1 = pow((x2-x1), 2);
    m2 = pow((y2-y1), 2);
    distancia = sqrt(m1 + m2);
    printf("%.4lf\n", distancia);
    return 0;
}
```
