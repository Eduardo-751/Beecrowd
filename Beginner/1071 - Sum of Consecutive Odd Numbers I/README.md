<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1071 - Soma de Impares Consecutivos I</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 2 valores inteiros <strong>X</strong> e <strong>Y</strong>. A
            seguir, calcule e mostre a soma dos números impares entre eles.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém dois valores inteiros.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            O programa deve imprimir um valor inteiro. Este valor é a soma dos
            valores ímpares que estão entre os valores fornecidos na entrada que
            deverá caber em um inteiro.
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
                  6<br />
                  -5
                </p>
              </td>
              <td>
                <p>5</p>
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
                <p>
                  15<br />
                  12
                </p>
              </td>
              <td>
                <p>13</p>
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
                <p>
                  12<br />
                  12
                </p>
              </td>
              <td>
                <p>0</p>
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

    int i, a, b, soma=0;

    scanf("%i %i", &a, &b);

    if (a<b){
        for(i=a+1; i<b; i++){
            if(i%2 == 1)
                soma = soma+i;
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    else{
        for(i=b+1; i<a; i++){
            if(i%2 == 1)
                soma = soma+(i);
            else if(i%2 == -1)
                soma = soma+i;
        }
    }

    printf("%i\n", soma);

    return 0;
}
```
