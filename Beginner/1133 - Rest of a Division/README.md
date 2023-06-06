<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1133 - Resto da Divisão</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa que leia 2 valores X e Y e que imprima todos os
            valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou
            igual a 3.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém 2 valores positivos inteiros quaisquer,
            não necessariamente em ordem crescente.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima todos os valores conforme exemplo abaixo, sempre em ordem
            crescente.
          </p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Sample Input</td>
              <td>Sample Output</td>
            </tr>
            <tr>
              <td class="division">
                <p>
                  10<br />
                  18
                </p>
              </td>
              <td>
                <p>
                  12<br />
                  13<br />
                  17
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
#include<stdio.h>

int main(){

	int X, Y, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X+1;
	while(aux<Y) {
		if(aux%5==2 || aux%5==3)
			printf("%i\n", aux);
		aux++;
	}
	return 0;
}
```
