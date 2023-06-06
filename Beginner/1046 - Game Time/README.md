<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1046 - Tempo de Jogo</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia a hora inicial e a hora final de um jogo. A seguir calcule a
            duração do jogo, sabendo que o mesmo pode começar em um dia e
            terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24
            horas.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém dois valores inteiros representando a hora de
            início e a hora de fim do jogo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Apresente a duração do jogo conforme exemplo abaixo.</p>
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
                <p>16 2</p>
              </td>
              <td>
                <p>O JOGO DUROU 10 HORA(S)</p>
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
                <p>0 0</p>
              </td>
              <td>
                <p>O JOGO DUROU 24 HORA(S)</p>
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
                <p>2 16</p>
              </td>
              <td>
                <p>O JOGO DUROU 14 HORA(S)</p>
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

    int A, B;
    scanf("%i %i", &A, &B);
    if(A>=B)
        B+=24;

    printf("O JOGO DUROU %i HORA(S)\n", B-A);

    return 0;
}
```
