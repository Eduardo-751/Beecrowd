<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1>1037 - 	Intervalo</h1>
        <div class="problem">
            <div class="description">
                <p>
                    Você deve fazer um programa que leia um valor qualquer e apresente uma mensagem dizendo em qual dos seguintes intervalos ([0,25], (25,50], (50,75], (75,100]) este valor se encontra. Obviamente se o valor não estiver em nenhum destes intervalos, deverá ser impressa a mensagem “Fora de intervalo”.</p>
                <p>
                    O símbolo ( representa "maior que". Por exemplo:<br />
                    [0,25]&nbsp; indica valores entre 0 e 25.0000, inclusive eles.<br />
                    (25,50] indica valores maiores que 25 Ex: 25.00001 até o valor 50.0000000</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
                    O arquivo de entrada contém um número com ponto flutuante qualquer.</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
                    A saída deve ser uma mensagem conforme exemplo abaixo.</p>
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
                                25.01</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Intervalo [25,50]</p>
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
                                25.00</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Intervalo [0,25]</p>
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
                                100.00</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Intervalo [75,100]</p>
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
                                -25.02</p>
                            </p>
                        </td>
                        <td>
                            <p>
                                Fora de intervalo</p>
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

    double A;

    scanf("%lf", &A);

    if(A>=0 && A<=25)
        printf("Intervalo [0,25]\n");
    else if(A>25 && A<=50)
        printf("Intervalo (25,50]\n");
    else if(A>50 && A<=75)
        printf("Intervalo (50,75]\n");
    else if(A>75 && A<=100)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");
    return 0;
}
```
