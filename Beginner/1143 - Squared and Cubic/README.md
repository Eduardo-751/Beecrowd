<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1143 - Quadrado e ao Cubo</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa que leia um valor inteiro N (1 &lt; N &lt;
            1000). Este N é a quantidade de linhas de saída que serão
            apresentadas na execução do programa.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém um número inteiro positivo N.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima a saída conforme o exemplo fornecido.</p>
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
                <p>
                  1 1 1<br />
                  2 4 8<br />
                  3 9 27<br />
                  4 16 64<br />
                  5 25 125
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

	int N, aux=1;
	scanf("%i", &N);
	while(aux<=N) {
		printf("%i %i %i\n", aux, aux*aux, aux*aux*aux);
		aux++;
	}
	return 0;
}
```
