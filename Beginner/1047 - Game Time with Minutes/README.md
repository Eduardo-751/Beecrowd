<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1047 - Tempo de Jogo com Minutos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia a hora inicial, minuto inicial, hora final e minuto final de um
            jogo. A seguir calcule a duração do jogo.
          </p>
          <p>
            <em>Obs:</em> O jogo tem duração mínima de um (1) minuto e duração
            máxima de 24 horas.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            Quatro números inteiros representando a hora de início e fim do
            jogo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Mostre a seguinte mensagem: “O JOGO DUROU XXX HORA(S) E YYY
            MINUTO(S)” .
          </p>
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
                <p>7 8 9 10</p>
              </td>
              <td>
                <p>O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)</p>
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
                <p>7 7 7 7</p>
              </td>
              <td>
                <p>O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)</p>
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
                <p>7 10 8 9</p>
              </td>
              <td>
                <p>O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)</p>
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

int main(){

    int hora1, min1, hora2, min2;
    scanf("%i %i %i %i", &hora1, &min1, &hora2, &min2);

    if(hora2<=hora1 && min2<=min1)
        hora2+=24;
    if(min2<min1){
        min2+=60;
        hora1++;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora2-hora1, min2-min1);

    return 0;
}
```
