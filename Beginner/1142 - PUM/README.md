<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1142 - PUM</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa que leia um valor inteiro N. Este N é a
            quantidade de linhas de saída que serão apresentadas na execução do
            programa.
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
                <p>7</p>
              </td>
              <td>
                <p>
                  1 2 3 PUM<br />
                  5 6 7 PUM<br />
                  9 10 11 PUM<br />
                  13 14 15 PUM<br />
                  17 18 19 PUM<br />
                  21 22 23 PUM<br />
                  25 26 27 PUM
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

	int N, n1=1, n2=2, n3=3;
	scanf("%i", &N);
	while(N>0){
		printf("%i %i %i PUM\n", n1, n2, n3);
		N--;
		n1+=4;
		n2+=4;
		n3+=4;
	}
	return 0;
}
```
