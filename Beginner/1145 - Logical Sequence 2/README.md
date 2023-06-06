<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1145 - Sequência Lógica 2</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa que leia dois valores <strong>X</strong> e
            <strong>Y</strong>. A seguir, mostre uma sequência de 1 até Y,
            passando para a próxima linha a cada <strong>X</strong> números.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém dois valores inteiros, (1 &lt; X &lt;
            20) e (X &lt; Y &lt; 100000).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Cada sequência deve ser impressa em uma linha apenas, com 1 espaço
            em branco entre cada número, conforme exemplo abaixo. Não deve haver
            espaço em branco após o último valor da linha.
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
                <p>3 99</p>
              </td>
              <td>
                <p>
                  1 2 3<br />
                  4 5 6<br />
                  7 8 9<br />
                  10 11 12<br />
                  ...<br />
                  97 98 99
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

	int X, Y, i, aux=1;
	scanf("%i %i", &X, &Y);
	while(aux<=Y) {
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
```
