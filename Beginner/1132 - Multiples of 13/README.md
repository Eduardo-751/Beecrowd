<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1132 - Múltiplos de 13</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a
            soma dos números que não são múltiplos de 13 entre X e Y, incluindo
            ambos.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém 2 valores inteiros quaisquer, não
            necessariamente em ordem crescente.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a soma de todos os valores não divisíveis por 13 entre os
            dois valores lidos na entrada, inclusive ambos se for o caso.
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
                  100<br />
                  200
                </p>
              </td>
              <td>
                <p>13954<br /></p>
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

int main() {

	int X, Y, Soma=0, aux;
	scanf("%i %i", &X, &Y);
	if(X>Y) {
		aux=X;
		X=Y;
		Y=aux;
	}
	aux=X;
	while(aux<=Y){
		if(aux%13 != 0)
			Soma+=aux;
		aux++;
	}
	printf("%i\n", Soma);
	return 0;
}
```
