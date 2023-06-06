<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1178 - Preenchimento de Vetor III</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor <strong>X</strong>. Coloque este valor na primeira
            posição de um vetor <strong>N</strong>[100]. Em cada posição
            subsequente de N (1 até 99), coloque a metade do valor armazenado na
            posição anterior, conforme o exemplo abaixo. Imprima o vetor
            <strong>N</strong>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contem um valor de dupla precisão com 4 casas decimais.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada posição do vetor <strong>N</strong>, escreva
            "N[<em>i</em>] = Y", onde <em>i</em> é a posição do vetor e
            <strong>Y </strong>é o valor armazenado naquela posição. Cada valor
            do vetor deve ser apresentado com 4 casas decimais.
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
                <p>200.0000</p>
              </td>
              <td>
                <p>
                  N[0] = 200.0000<br />
                  N[1] = 100.0000<br />
                  N[2] = 50.0000<br />
                  N[3] = 25.0000<br />
                  N[4] = 12.5000<br />
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

    int i;
    double N;

    scanf("%lf", &N);
    for(i=0; i<100; i++) {
        printf("N[%d] = %.4lf\n", i, N);
        N/=2;
    }
    return 0;
}
```
