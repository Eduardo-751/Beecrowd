<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1158 - Soma de Ímpares Consecutivos III</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>N</strong> que é a quantidade de casos
            de teste que vem a seguir. Cada caso de teste consiste de dois
            inteiros <strong>X</strong> e <strong>Y</strong>. Você deve
            apresentar a soma de <strong>Y </strong>ímpares consecutivos a
            partir de&nbsp;<strong>X </strong>inclusive o próprio X se ele for
            ímpar. Por exemplo:<br />
            para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7
            + 9 + 11 + 13<br />
            para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9
            + 11 + 13
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha de entrada é um inteiro <strong>N </strong>que é a
            quantidade de casos de teste que vem a seguir. Cada caso de teste
            consiste em uma linha contendo dois inteiros <strong>X</strong> e
            <strong>Y</strong>.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a soma dos consecutivos números ímpares a partir do valor
            <strong>X</strong>.
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
                  2<br />
                  4 3<br />
                  11 2
                </p>
              </td>
              <td>
                <p>
                  21<br />
                  24
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

    int cases, X, Y, Sum=0, i, i2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        Sum=0;
        scanf("%i %i", &X, &Y);
        for(i2=X; Y>0 ; i2++){
            if(i2%2 == 1 || i2%2 == -1){
                Sum+=i2;
                Y--;
            }
        }
        printf("%i\n", Sum);
    }
    return 0;
}
```
