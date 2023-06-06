<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1016 - Distância</h1>
      <div class="problem">
        <div class="description">
          <p>
            Dois carros (X e Y) partem em uma mesma direção. O carro X sai com
            velocidade constante de 60 Km/h e o carro Y sai com velocidade
            constante de 90 Km/h.
          </p>
          <p>
            Em uma hora (60 minutos) o carro Y consegue se distanciar 30
            quilômetros do carro X, ou seja, consegue se afastar um quilômetro a
            cada 2 minutos.
          </p>
          <p>
            Leia a distância (em Km) e calcule quanto tempo leva (em minutos)
            para o carro Y tomar essa distância do outro carro.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém um número inteiro.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima o tempo necessário seguido da mensagem "minutos".</p>
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
                <p>30</p>
              </td>
              <td>
                <p>60 minutos</p>
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
                <p>110</p>
              </td>
              <td>
                <p>220 minutos</p>
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
                <p>7</p>
              </td>
              <td>
                <p>14 minutos</p>
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

    int dis;
    double x1, y1;
    scanf("%i", &dis);
    printf("%i minutos\n", dis*2);
    return 0;
}
```
