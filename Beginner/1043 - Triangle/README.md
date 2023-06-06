<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1043 - Triângulo</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um
            triângulo. Em caso positivo, calcule o perímetro do triângulo e
            apresente a mensagem:
          </p>
          <p><br /><span class="code">Perimetro = XX.X</span></p>
          <p>
            <br />Em caso negativo, calcule a área do trapézio que tem A e B
            como base e C como altura, mostrando a mensagem
          </p>
          <p><br /><span class="code">Area = XX.X</span></p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém três valores reais.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>O resultado deve ser apresentado com uma casa decimal.</p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Exemplo de Entrada</td>
              <td>Exemplo de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>6.0 4.0 2.0</p>
              </td>
              <td>
                <p>Area = 10.0</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplo de Entrada</td>
              <td>Exemplo de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>6.0 4.0 2.1</p>
              </td>
              <td>
                <p>Perimetro = 12.1</p>
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

    scanf("%lf %lf %lf", &A, &B, &C);
    if(A<B+C && B<A+C && C<A+B)
        printf("Perimetro = %.1lf\n", A+B+C);

    else
        printf("Area = %.1lf\n",((A+B)*C)/2);

    return 0;
}
```
