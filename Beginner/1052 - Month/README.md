<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1052 - Mês</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro entre 1 e 12, inclusive. Correspondente a este
            valor, deve ser apresentado como resposta o mês do ano por extenso,
            em inglês, com a primeira letra maiúscula.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém um único valor inteiro.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima por extenso o nome do mês correspondente ao número existente
            na entrada, com a primeira letra em maiúscula.
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
                <p>4</p>
              </td>
              <td>
                <p>April</p>
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

    int mes;
    scanf("%i", &mes);
    switch(mes){
        case 1 :
            printf("January\n");
        case 2 :
            printf("February\n");
        case 3 :
            printf("March\n");
        case 4 :
            printf("April\n");
        case 5 :
            printf("May\n");
        case 6 :
            printf("June\n");
        case 7 :
            printf("July\n");
        case 8 :
            printf("August\n");
        case 9 :
            printf("September\n");
        case 10 :
            printf("October\n");
        case 11 :
            printf("November\n");
        case 12 :
            printf("December\n");
    }
    return 0;
}
```
