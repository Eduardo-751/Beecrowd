<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1098 - Sequencia IJ 4</h1>
      <div class="problem">
        <div class="description">
          <p>
            Você deve fazer um programa que apresente a sequencia conforme o
            exemplo abaixo.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>Não há nenhuma entrada neste problema.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima a sequencia conforme exemplo abaixo.</p>
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
                  I=0 J=1<br />
                  I=0 J=2<br />
                  I=0 J=3<br />
                  I=0.2 J=1.2<br />
                  I=0.2 J=2.2<br />
                  I=0.2 J=3.2<br />
                  .....<br />
                  I=2 J=?<br />
                  I=2 J=?<br />
                  I=2 J=?
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
int main() {
    float i, j;
    for(i=0; i<2.1; i=i+0.2) {
        j=i+1;
        if(i==0 || i==1 || i>1.9) {
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}
```
