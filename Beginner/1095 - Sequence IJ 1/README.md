<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1095 - Sequencia IJ 1</h1>
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
          <p>Imprima a sequencia conforme exemplo abaixo</p>
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
                  I=1 J=60<br />
                  I=4 J=55<br />
                  I=7 J=50<br />
                  ...<br />
                  I=? J=0
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

int main(void) {

    int i, j=60;

    for(i=1;i<40;i+=3){
        printf("I=%i J=%i\n",i,j);
        j-=5;
    }

    return 0;
}
```
