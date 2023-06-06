<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1036 - Fórmula de Bhaskara</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes, mostre a mensagem correspondente <em>“Impossivel calcular”</em>, caso haja uma divisão por 0 ou raiz de numero negativo.</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    Leia três valores de ponto flutuante (double) A, B e C.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
                    Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto,
                    com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem. </p>
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
                                10.0 20.1 5.1</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                R1 = -0.29788<br />
                                R2 = -1.71212</p>
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
                                0.0 20.0 5.0</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Impossivel calcular</p>
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
                                10.3 203.0 5.0</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                R1 = -0.02466<br />
                                R2 = -19.68408</p>
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
                                10.0 3.0 5.0</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Impossivel calcular</p>
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


int main(){

    double A, B, C;
    double x1, x2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B, 2) - (4*A*C);
    x1 = (-B + sqrt(delta))/(2*A);
    x2 = (-B - sqrt(delta))/(2*A);

    if(A>0 &&   delta>0){
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
```
