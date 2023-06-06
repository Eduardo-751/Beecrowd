<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1174 - Seleçao em Vetor I</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia um vetor A[100]. No final, mostre todas as
            posições do vetor que armazenam um valor menor ou igual a 10 e o
            valor armazenado em cada uma das posições.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém 100 valores, podendo ser inteiros, reais, positivos
            ou negativos.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada valor do vetor menor ou igual a 10, escreva
            "A[<strong>i</strong>] = <strong>x</strong>", onde
            <strong>i</strong> é&nbsp;a posição do vetor e <strong>x</strong> é
            o valor armazenado na posição, com uma casa após o ponto decimal.
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
                <p>
                  0<br />
                  -5<br />
                  63<br />
                  -8.5<br />
                  ...
                </p>
              </td>
              <td>
                <p>
                  A[0] = 0.0<br />
                  A[1] = -5.0<br />
                  A[3] = -8.5<br />
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

    double N[100];
    int i;
    for(i=0; i<100; i++)
        scanf("%lf", &N[i]);
    for(i=0; i<100; i++)
        if(N[i] <= 10)
            printf("A[%d] = %.1lf\n", i, N[i]);
    return 0;
}
```
