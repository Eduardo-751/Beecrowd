<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1045 - Tipos de Triângulos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem
            decrescente, de modo que o lado A representa o maior dos 3 lados. A
            seguir, determine o tipo de triângulo que estes três lados formam,
            com base nos seguintes casos, sempre escrevendo uma mensagem
            adequada:<br />
          </p>
          <ul>
            <li>
              se A &ge; B+C, apresente a mensagem:
              <strong>NAO FORMA TRIANGULO</strong>
            </li>
            <li>
              se A<sup>2</sup> = B<sup>2</sup> + C<sup>2</sup>, apresente a
              mensagem: <strong>TRIANGULO RETANGULO</strong>
            </li>
            <li>
              se A<sup>2</sup> &gt; B<sup>2</sup> + C<sup>2</sup>, apresente a
              mensagem: <strong>TRIANGULO OBTUSANGULO</strong>
            </li>
            <li>
              se A<sup>2</sup> &lt; B<sup>2</sup> + C<sup>2</sup>, apresente a
              mensagem: <strong>TRIANGULO ACUTANGULO</strong>
            </li>
            <li>
              se os três lados forem iguais, apresente a mensagem:
              <strong>TRIANGULO EQUILATERO</strong>
            </li>
            <li>
              se apenas dois dos lados forem iguais, apresente a mensagem:
              <strong>TRIANGULO ISOSCELES</strong>
            </li>
          </ul>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contem três valores de ponto flutuante de dupla precisão A
            (0 &lt; A) , B (0 &lt; B) e C (0 &lt; C).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima todas as classificações do triângulo especificado na
            entrada.
          </p>
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
                <p>7.0 5.0 7.0</p>
              </td>
              <td>
                <p>
                  TRIANGULO ACUTANGULO<br />
                  TRIANGULO ISOSCELES
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
                <p>6.0 6.0 10.0</p>
              </td>
              <td>
                <p>
                  TRIANGULO OBTUSANGULO<br />
                  TRIANGULO ISOSCELES
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
                <p>6.0 6.0 6.0</p>
              </td>
              <td>
                <p>
                  TRIANGULO ACUTANGULO<br />
                  TRIANGULO EQUILATERO
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
                <p>5.0 7.0 2.0</p>
              </td>
              <td>
                <p>NAO FORMA TRIANGULO</p>
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
                <p>6.0 8.0 10.0</p>
              </td>
              <td>
                <p>TRIANGULO RETANGULO</p>
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

void swap(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if (B > A)
        swap(&A, &B);
    if (C > B)
    {
        swap(&B, &C);
        if (B > A)
            swap(&A, &B);
    }
    if (A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if (A * A == B * B + C * C)
            printf("TRIANGULO RETANGULO\n");
        else if (A * A > B * B + C * C)
            printf("TRIANGULO OBTUSANGULO\n");
        else
            printf("TRIANGULO ACUTANGULO\n");

        if (A == B && B == C)
            printf("TRIANGULO EQUILATERO\n");
        else if (A == B || A == C || B == C)
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
```
