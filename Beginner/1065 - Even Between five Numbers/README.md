<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1065 - Pares entre Cinco Números</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia 5 valores inteiros. Conte quantos destes
            valores digitados são pares e mostre esta informação.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém 5 valores inteiros quaisquer.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a mensagem conforme o exemplo fornecido, indicando a
            quantidade de valores pares lidos.
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
                  -4<br />
                  12
                </p>
              </td>
              <td>
                <p>3 valores pares</p>
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
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
    }
    printf("%i valores pares\n", a);
    return 0;
}
```
