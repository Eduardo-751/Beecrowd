<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1070 - Seis Números Ímpares</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>X</strong>. Em seguida apresente os 6
            valores ímpares consecutivos a partir de <strong>X</strong>, um
            valor por linha, inclusive o <strong>X </strong>ser for o caso.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada será um valor inteiro positivo.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>A saída será uma sequência de seis números ímpares.</p>
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
                <p>8</p>
              </td>
              <td>
                <p>
                  9<br />
                  11<br />
                  13<br />
                  15<br />
                  17<br />
                  19
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

    int a, i;

    scanf("%i", &a);
    for(i=a; i<=a+11; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }

    return 0;
}
```
