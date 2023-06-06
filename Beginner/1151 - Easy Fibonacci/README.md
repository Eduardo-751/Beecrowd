<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1151 - Fibonacci Fácil</h1>
      <div class="problem">
        <div class="description">
          <p>
            A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida
            como série de Fibonacci. Nessa sequência, cada número, depois dos 2
            primeiros, é igual à soma dos 2 anteriores. Escreva um algoritmo que
            leia um inteiro N (N &lt; 46) e mostre os N primeiros números dessa
            série.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém um valor inteiro N (0 &lt; N &lt; 46).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Os valores devem ser mostrados na mesma linha, separados por um
            espaço em branco. Não deve haver espaço após o último valor.
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
                <p>5</p>
              </td>
              <td>
                <p>0 1 1 2 3</p>
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

	int N, i, F, f1=0, f2=1;
	scanf("%i", &N);
	for(i=0; i<N; i++) {
		if(i<2)
			F=i;
		else{
			F = f1+f2;
			f1=f2;
			f2=F;
		}
		printf("%i", F);
		if(i!=N-1)
			printf(" ");
		else
			printf("\n");
	}
	return 0;
}
```
