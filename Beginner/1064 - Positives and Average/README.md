<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1064 - Positivos e Média</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 6 valores. Em seguida, mostre quantos destes valores digitados
            foram positivos. Na próxima linha, deve-se mostrar a média de todos
            os valores positivos digitados, com um dígito após o ponto decimal.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém 6 números que podem ser valores inteiros ou de
            ponto flutuante. Pelo menos um destes números será positivo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            O primeiro valor de saída é a quantidade de valores positivos. A
            próxima linha deve mostrar a média dos valores positivos digitados.
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
                  7<br />
                  -5<br />
                  6<br />
                  -3.4<br />
                  4.6<br />
                  12
                </p>
              </td>
              <td>
                <p>
                  4 valores positivos<br />
                  7.4
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

    double aux, media=0;
    int pos=0, i;

    for(i=0; i<6; i++){
        scanf("%lf", &aux);

        if(aux>0){
            media = media+aux;
            pos++;
        }
    }

    media = media/pos;

    printf("%i valores positivos\n", pos);
    printf("%.1lf\n", media);

    return 0;
}
```
