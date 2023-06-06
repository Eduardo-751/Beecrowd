<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1177 - Preenchimento de Vetor II</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia um valor <strong>T</strong> e preencha um
            vetor <strong>N</strong>[1000] com a sequência de valores de 0 até
            <strong>T</strong>-1 repetidas vezes, conforme exemplo abaixo.
            Imprima o vetor <strong>N</strong>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém um valor inteiro <strong>T</strong> (2 ≤
            <strong>T</strong> ≤ 50).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada posição do vetor, escreva "<strong>N</strong>[<em>i</em>]
            = <strong>x</strong>", onde <em>i</em> é a posição do vetor e
            <strong>x</strong> é o valor armazenado naquela posição.
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
                <p>3</p>
              </td>
              <td>
                <p>
                  N[0] = 0<br />
                  N[1] = 1<br />
                  N[2] = 2<br />
                  N[3] = 0<br />
                  N[4] = 1<br />
                  N[5] = 2<br />
                  N[6] = 0<br />
                  N[7] = 1<br />
                  N[8] = 2<br />
                  ...
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

int main() {

    int N, i;
    scanf("%d", &N);
    for(i=0; i<1000; i++) {
        printf("N[%d] = %d\n", i, i % N);
    }
    return 0;
}
```
