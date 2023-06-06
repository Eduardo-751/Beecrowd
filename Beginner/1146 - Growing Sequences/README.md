<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1146 - Sequências Crescentes</h1>
      <div class="problem">
        <div class="description">
          <p>
            Este programa deve ler uma variável inteira
            <strong>X</strong> inúmeras vezes (deve parar quando o valor no
            arquivo de entrada for igual a zero). Para cada valor lido imprima a
            sequência de 1 até <strong>X</strong>, com um espaço entre cada
            número e seu sucessor.<br />
            <br />
            Obs: cuide para não deixar espaço em branco após o último valor
            apresentado na linha ou você receberá
            <strong><em>Presentation Error</em></strong
            >.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém vários números inteiros. O último número
            no arquivo de entrada é 0.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada número <strong>N </strong>do arquivo de entrada deve ser
            impressa uma linha de 1 até <strong>N</strong>, conforme o exemplo
            abaixo. Não deve haver espaço em branco após o último valor da
            linha.
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
                  5<br />
                  10<br />
                  3<br />
                  0
                </p>
              </td>
              <td>
                <p>
                  1 2 3 4 5<br />
                  1 2 3 4 5 6 7 8 9 10<br />
                  1 2 3
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

	int X, i, aux;
	scanf("%i", &X);
	while(X!=0){
		aux=1;
		for(i=0;i<X; i++) {
			printf("%i", aux);
			aux++;
			if(i!=X-1)
				printf(" ");
		}
		printf("\n");
		scanf("%i", &X);
	}
	return 0;
}
```
