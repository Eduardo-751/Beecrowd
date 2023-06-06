<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1146 - Somando Inteiros Consecutivos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um algoritmo para ler um valor A e um valor N. Imprimir a soma
            de A + i para cada i com os valores (0 <= i <= N-1). Enquanto N for
            negativo ou ZERO, um novo N(apenas N) deve ser lido.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém somente valores inteiros, podendo ser positivos ou
            negativos. Todos os valores estão na mesma linha.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>A saída contém apenas um valor inteiro.</p>
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
                <p>3 2</p>
              </td>
              <td>
                <p>7</p>
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
                <p>3 -1 0 -2 2</p>
              </td>
              <td>
                <p>7</p>
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

	int A, N, i, Soma=0;
	scanf("%i", &A);
	do {
		scanf("%i", &N);
	}while(N<=0);

	for(i=0; i<N; i++) {
		Soma += (A+i);
	}
	printf("%i\n", Soma);
	return 0;
}
```
