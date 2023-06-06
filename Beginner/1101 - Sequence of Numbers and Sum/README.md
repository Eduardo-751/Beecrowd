<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1101 - Sequência de Números e Soma</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um conjunto não determinado de pares de valores
            <em><strong>M </strong></em>e <em><strong>N </strong></em>(parar
            quando algum dos valores for menor ou igual a zero). Para cada par
            lido, mostre a sequência do menor até o maior e a soma dos inteiros
            consecutivos entre eles (incluindo o <em><strong>N </strong></em>e
            <em><strong>M</strong></em
            >).
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém um número não determinado de valores
            <em><strong>M </strong></em>e <strong><em>N</em></strong
            >. A última linha de entrada vai conter um número nulo ou negativo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada dupla de valores, imprima a sequência do menor até o maior
            e a soma deles, conforme exemplo abaixo.
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
                  5 2<br />
                  6 3<br />
                  5 0
                </p>
              </td>
              <td>
                <p>
                  2 3 4 5 Sum=14<br />
                  3 4 5 6 Sum=18
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

	int M, N, Sum=0, aux;
	while(scanf("%d %d", &M,&N)!=0) {
		if(M<=0 || N<=0)
			break;

		if(N<M) {
			aux = N;
			N = M;
			M = aux;
		}
		for(M; M<=N; M++) {
			printf("%i ", M);
			Sum+=M;
		}
		printf("Sum=%i\n", Sum);
		Sum=0;
	}
	return 0;
}
```
