<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1113 - Crescente e Decrescente</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia uma quantidade indeterminada de duplas de valores inteiros X e
            Y. Escreva para cada X e Y uma mensagem que indique se estes valores
            foram digitados em ordem crescente ou decrescente.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém vários casos de teste. Cada caso contém dois
            valores inteiros X e Y. A leitura deve ser encerrada ao ser
            fornecido valores iguais para X e Y.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso de teste imprima “Crescente”, caso os valores tenham
            sido digitados na ordem crescente, caso contrário imprima a mensagem
            “Decrescente”.
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
                  5 4<br />
                  7 2<br />
                  3 8<br />
                  2 2
                </p>
              </td>
              <td>
                <p>
                  Decrescente<br />
                  Decrescente<br />
                  Crescente
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
#include <stdio.h>

int main(){

	int X, Y;
	do{
	scanf("%i %i", &X, &Y);
	if(X < Y)
		printf("Crescente\n");
	else if(Y<X)
		printf("Decrescente\n");

	}while(X!=Y);
	return 0;
}
```
