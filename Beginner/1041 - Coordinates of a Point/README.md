<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1041 - Coordenadas de um Ponto</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 2 valores com uma casa decimal (x e y), que devem representar
            as coordenadas de um ponto em um plano. A seguir, determine qual o
            quadrante ao qual pertence o ponto, ou se está sobre um dos eixos
            cartesianos ou na origem (x = y = 0).
          </p>
          <p class="center">
            <img
              alt=""
              src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1041.png"
              style="width: 175px; height: 175px"
            />
          </p>
          <p>Se o ponto estiver na origem, escreva a mensagem “Origem”.</p>
          <p>
            Se o ponto estiver sobre um dos eixos escreva “Eixo X” ou “Eixo Y”,
            conforme for a situação.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contem as coordenadas de um ponto.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>A saída deve apresentar o quadrante em que o ponto se encontra.</p>
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
                <p>4.5 -2.2</p>
              </td>
              <td>
                <p>Q4</p>
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
                <p>0.1 0.1</p>
              </td>
              <td>
                <p>Q1</p>
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
                <p>0.0 0.0</p>
              </td>
              <td>
                <p>Origem</p>
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

    double X1, Y1;

    scanf("%lf %lf",&X1, &Y1);

    if(X1==0 && Y1==0)
        printf("Origem\n");
    else if(X1==0)
        printf("Eixo Y\n");
    else if(Y1==0)
        printf("Eixo X\n");
    else if(X1>0 && Y1>0)
        printf("Q1\n");
    else if(X1<0 && Y1<0)
        printf("Q3\n");
    else if(X1>0 && Y1<0)
        printf("Q4\n");
    else if(X1<0 && Y1>0)
        printf("Q2\n");
    return 0;
}
```
