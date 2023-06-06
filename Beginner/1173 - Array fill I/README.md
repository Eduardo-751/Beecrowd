<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1173 - Preenchimento de Vetor I</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor e faça um programa que coloque o valor lido na
            primeira posição de um vetor N[10]. Em cada posição subsequente,
            coloque o dobro do valor da posição anterior. Por exemplo, se o
            valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim
            sucessivamente. Mostre o vetor em seguida.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém um valor inteiro <strong>(V&lt;=50)</strong>.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada posição do vetor, escreva "N[<strong>i</strong>] =
            <strong>X</strong>", onde <strong>i</strong> é a posição do vetor e
            <strong>X</strong> é o valor armazenado na posição
            <strong>i</strong>. O primeiro número do vetor N (N[0]) irá receber
            o valor de V.
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
                <p>1</p>
              </td>
              <td>
                <p>
                  N[0] = 1<br />
                  N[1] = 2<br />
                  N[2] = 4<br />
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

    int N[10], i;
    scanf("%d", &N[0]);
    for(i=1; i<10; i++) {
        N[i] = N[i-1]*2;
    }
    for(i=0; i<10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}
```
