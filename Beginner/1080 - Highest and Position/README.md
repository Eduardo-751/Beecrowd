<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1080 - Maior e Posição</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 100 valores inteiros. Apresente então o maior valor lido e a
            posição dentre os 100 valores lidos.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém 100 números inteiros, positivos e
            distintos.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Apresente o maior valor lido e a posição de entrada, conforme
            exemplo abaixo.
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
                  2<br />
                  113<br />
                  45<br />
                  34565<br />
                  6<br />
                  ...<br />
                  8<br />
                  &nbsp;
                </p>
              </td>
              <td>
                <p>
                  34565<br />
                  4
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

	int Maior=0, pos, i, aux;

	for(i=1; i<=100; i++)
	{
	   	scanf("%i", &aux);
	   	if(aux>Maior){
	   		Maior = aux;
			pos = i;
		}
	}

	printf("%i\n", Maior);
	printf("%i\n", pos);

	return 0;
}
```
