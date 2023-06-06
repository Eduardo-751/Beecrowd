<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1165 - Número Primo</h1>
      <div class="problem">
        <div class="description">
          <p>
            Na matemática, um Número Primo é aquele que pode ser dividido
            somente por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo,
            pois pode ser dividido apenas pelo número 1 e pelo número 7.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém vários casos de teste. A primeira linha da entrada
            contém um inteiro <strong>N </strong> (1 ≤ <strong>N</strong> ≤
            100), indicando o número de casos de teste da entrada. Cada uma das
            <strong>N</strong> linhas seguintes contém um valor inteiro
            <strong>X</strong> (1 < <strong>X</strong> ≤ 10<sup>7</sup>), que
            pode ser ou não, um número primo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso de teste de entrada, imprima a mensagem “<strong
              >X </strong
            >eh primo” ou “<strong>X </strong>nao eh primo”, de acordo com a
            especificação fornecida.
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
                  3<br />
                  8<br />
                  51<br />
                  7
                </p>
              </td>
              <td>
                <p>
                  8 nao eh primo<br />
                  51 nao eh primo<br />
                  7 eh primo
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

int main(){

    int N, X, Sum;
    int i, i2;
    scanf("%i", &N);
    for(i=0; i<N; i++) {
        Sum=0;
        scanf("%i", &X);
        for(i2=1; i2<=X; i2++) {
            if(X%i2==0)
                Sum++;
        }
        if(Sum==2)
            printf("%i eh primo\n", X);
        else
            printf("%i nao eh primo\n", X);
    }
    return 0;
}
```
