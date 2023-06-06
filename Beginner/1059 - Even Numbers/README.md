<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1059 - Números Pares</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que mostre os números pares entre 1 e 100,
            inclusive.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            Neste problema extremamente simples de repetição não há entrada.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima todos os números pares entre 1 e 100, inclusive se for o
            caso, um em cada linha.
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
              <td class="division"></td>
              <td>
                <p>
                  2<br />
                  4<br />
                  6<br />
                  ...<br />
                  100
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

    int i;

    for(i=2; i<=100; i+=2)
        printf("%i\n", i);

    return 0;
}
```
