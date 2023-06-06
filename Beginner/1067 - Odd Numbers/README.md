<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1067 - Números Ímpares</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>X </strong>(1 &lt;=
            <strong>X </strong>&lt;= 1000). Em seguida mostre os ímpares de 1
            até <strong>X</strong>, um valor por linha, inclusive o
            <strong>X</strong>, se for o caso.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém 1 valor inteiro qualquer.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima todos os valores ímpares de 1 até <strong>X</strong>,
            inclusive <strong>X</strong>, se for o caso.
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
                <p>8</p>
              </td>
              <td>
                <p>
                  1<br />
                  3<br />
                  5<br />
                  7
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

    for(i=1; i<=a; i++){
        if(i%2 == 1)
            printf("%i\n", i);
    }

    return 0;
}
```
