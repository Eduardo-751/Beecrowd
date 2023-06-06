<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1114 - Senha Fixa</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa que repita a leitura de uma senha até que ela
            seja válida. Para cada leitura de senha incorreta informada,
            escrever a mensagem "Senha Invalida". Quando a senha for informada
            corretamente deve ser impressa a mensagem "Acesso Permitido" e o
            algoritmo encerrado. Considere que a senha correta é o valor
            2002.&nbsp;
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada é composta por vários casos de testes contendo valores
            inteiros.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada valor lido mostre a mensagem correspondente à descrição do
            problema.
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
                  2200<br />
                  1020<br />
                  2022<br />
                  2002
                </p>
              </td>
              <td>
                <p>
                  Senha Invalida<br />
                  Senha Invalida<br />
                  Senha Invalida<br />
                  Acesso Permitido
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

	int entrada;
	scanf("%i", &entrada);
	while(entrada != 2002) {
		printf("Senha Invalida\n");
		scanf("%i", &entrada);
	}
	printf("Acesso Permitido\n");

	return 0;
}
```
