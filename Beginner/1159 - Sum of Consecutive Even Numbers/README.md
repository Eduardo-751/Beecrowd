<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1159 - Soma de Pares Consecutivos</h1>
      <div class="problem">
        <div class="description">
          <p>
            O programa deve ler um valor inteiro <strong>X </strong>indefinidas
            vezes. (O programa irá parar quando o valor de X for igual a 0).
            Para cada <strong>X </strong>lido, imprima a soma dos 5 pares
            consecutivos a partir de <strong>X</strong>, inclusive o
            <strong>X </strong>, se for par. Se o valor de entrada for 4, por
            exemplo, a saída deve ser 40, que é o resultado da operação:
            4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo,
            a saída deve ser 80, que é a soma de 12+14+16+18+20.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém muitos valores inteiros. O último valor
            do arquivo é zero.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima a saida conforme a explicação acima e o exemplo abaixo.</p>
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
                  4<br />
                  11<br />
                  0
                </p>
              </td>
              <td>
                <p>
                  40<br />
                  80
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

    int X, Y, Sum;
    scanf("%i", &X);
    while(X != 0){
        Sum=0;
        Y=5;
        do {
            if(X%2 == 0) {
                Sum+=X;
                Y--;
            }
            X++;
        }while(Y>0);
        printf("%i\n", Sum);
        scanf("%i", &X);
    }
    return 0;
}
```
