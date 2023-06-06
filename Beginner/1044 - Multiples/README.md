<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1044 - Múltiplos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma
            mensagem <strong>"Sao Multiplos"</strong> ou
            <strong>"Nao sao Multiplos"</strong>, indicando se os valores lidos
            são múltiplos entre si.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém valores inteiros.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>A saída deve conter uma das mensagens conforme descrito acima.</p>
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
                <p>6 24</p>
              </td>
              <td>
                <p>Sao Multiplos</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplo de Entrada</td>
              <td>Exemplo de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>6 25</p>
              </td>
              <td>
                <p>Nao sao Multiplos</p>
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

    int A, B;

    scanf("%i %i", &A, &B);
    if(A<B && B%A==0)
        printf("Sao Multiplos\n");

    else if(B<A && A%B==0)
        printf("Sao Multiplos\n");

    else
        printf("Nao sao Multiplos\n");

    return 0;
}
```
