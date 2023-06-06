<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1153 - Fatorial Simples</h1>
      <div class="problem">
        <div class="description">
          <p>
            Ler um valor N. Calcular e escrever seu respectivo fatorial.
            Fatorial de N = N * (N-1) * (N-2) * (N-3) * ... * 1.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém um valor inteiro N (0 &lt; N &lt; 13).</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            A saída contém um valor inteiro, correspondente ao fatorial de N.
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
                <p>24</p>
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

	int N, i;
	scanf("%i", &N);
	for(i=N-1; i>0; i--) {
		N = N*i;
	}
	printf("%i\n", N);
	return 0;
}
```
