<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1038 - Lanche</h1>
      <div class="problem">
        <div class="description">
          <p>
            Com base na tabela abaixo, escreva um programa que leia o código de
            um item e a quantidade deste item. A seguir, calcule e mostre o
            valor da conta a pagar.
          </p>
          <p class="center">
            <img
              alt=""
              src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1038_pt.png"
              style="width: 416px; height: 193px"
            />
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém dois valores inteiros correspondentes ao
            código e à quantidade de um item conforme tabela acima.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo
            valor a ser pago, com 2 casas após o ponto decimal.
          </p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>3 2</p>
              </td>
              <td>
                <p>Total: R$ 10.00</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>4 3</p>
              </td>
              <td>
                <p>Total: R$ 6.00</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>2 3</p>
              </td>
              <td>
                <p>Total: R$ 13.50</p>
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
    float valor;

    scanf("%i %i", &A, &B);
    switch(A){
        case 1:
            valor = B * 4.0;
            break;
        case 2:
            valor = B * 4.5;
            break;
        case 3:
            valor = B * 5.0;
            break;
        case 4:
            valor = B * 2.0;
            break;
        case 5:
            valor = B * 1.5;
            break;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
```
