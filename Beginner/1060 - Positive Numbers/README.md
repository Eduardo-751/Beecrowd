<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1060 - Números Positivos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia 6 valores. Estes valores serão somente
            negativos ou positivos (desconsidere os valores nulos). A seguir,
            mostre a quantidade de valores positivos digitados.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>Seis valores, negativos e/ou positivos.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima uma mensagem dizendo quantos valores positivos foram lidos.
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
                <p>4 valores positivos</p>
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

    int i, a = 0;
    double A[6];

    for(i=0; i<6; i++){
        scanf("%lf", &A[i]);
        if(A[i]>0)
            a++;
    }
    printf("%i valores positivos\n", a);
    return 0;
}
```
