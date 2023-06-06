<html>
<body style="padding: 10px 0px;">
    <div class="header">
        <h1>1768 - Árvore de Natal</h1>
        <div class="problem">
            <div class="description">
                <p>As crianças adoram desenhar árvores de natal e você desafiou algumas delas a desenharem árvores de diversos tamanhos com apenas com o caractere asterisco "*".</p>
                <p>A regra é simples. De baixo para cima, o tronco da árvore consiste de 3 asteriscos e depois 1. Em seguida vem o restante da árvore, com cada fileira de folhas iniciando no tamanho que você determinou e diminuindo de dois em dois, até chegar na copa da árvore que terá apenas um asterisco. Note que para isso dar certo, somente será permitido tamanhos ímpares para estas árvores.</p>
                </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>A entrada contém vários casos de teste e termina com <strong>EOF</strong>. Cada caso de teste consiste em um inteiro <strong>N</strong> (2 &lt; <strong>N</strong> &lt; 100).</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>Para cada caso de teste de entrada, seu programa deverá desenhar uma árvore conforme especificação acima e exemplo abaixo, com uma linha em branco após cada árvore.</p>
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
                                9</p>
                            </p>
                        </td>
                        <td>
                            <p>&nbsp;&nbsp;&nbsp;&nbsp;*<br>
                                &nbsp;&nbsp;&nbsp;***<br>
                                &nbsp;&nbsp;*****<br>
                                &nbsp;*******<br>
                                *********<br>
                                &nbsp;&nbsp;&nbsp;&nbsp;*<br>
                                &nbsp;&nbsp;&nbsp;***<br><br>
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
                                5</p>
                            </p>
                        </td>
                        <td>
                            </p><p>&nbsp;&nbsp;*<br>
                                &nbsp;***<br>
                                *****<br>
                                &nbsp;&nbsp;*<br>
                                &nbsp;***<br><br>
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

int main()
{
    int i, a, b, c, d=0;

    while(scanf("%i", &i)!=EOF) {
        d = 0;
        for(a=1; a<=i; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        d=0;
        for(a=1; a<=3; a=a+2) {
            for(c=i/2-d; c>0; c--)
                printf(" ");

            for(b=1; b<=a; b++)
                printf("*");

            printf("\n");
            d++;
        }
        printf("\n");
    }
    return 0;
}
```
