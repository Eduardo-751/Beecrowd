<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1019 - Conversão de Tempo</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro, que é o tempo de duração em segundos de um
            determinado evento em uma fábrica, e informe-o expresso no formato
            horas:minutos:segundos.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém um valor inteiro<strong> N</strong>.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima o tempo lido no arquivo de entrada (segundos), convertido
            para horas:minutos:segundos, conforme exemplo fornecido.
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
                <p>556</p>
              </td>
              <td>
                <p>0:9:16</p>
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
                <p>1</p>
              </td>
              <td>
                <p>0:0:1</p>
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
                <p>140153</p>
              </td>
              <td>
                <p>38:55:53</p>
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

int main()
{

    int sec, min, hour;

    scanf("%i", &sec);

    hour = sec / 3600;
    sec %= 3600;
    min = sec / 60;
    sec %= 60;

    printf("%i:%i:%i\n", hour, min, sec);

    return 0;
}
```
