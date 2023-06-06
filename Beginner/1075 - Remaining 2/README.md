<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1075 - Resto 2</h1>
      <div>
        <p>
          Adaptado por Neilor Tonin, URI
          <img
            alt=""
            src="https://resources.beecrowd.com.br/gallery/images/flags/br.gif"
            style="width: 16px; height: 11px"
          />
          Brasil
        </p>
      </div>
      <strong>Timelimit: 1</strong>
    </div>
    <div class="problem">
      <div class="description">
        <p>
          Leia um valor inteiro <strong>N</strong>. Apresente todos os números
          entre 1 e 10000 que divididos por <strong>N </strong>dão resto igual a
          2.
        </p>
      </div>
      <h2>Entrada</h2>
      <div class="input">
        <p>
          A entrada contém um valor inteiro <strong>N </strong>(<strong
            >N </strong
          >&lt; 10000).
        </p>
      </div>
      <h2>Saída</h2>
      <div class="output">
        <p>
          Imprima todos valores que quando divididos por <strong>N </strong>dão
          resto = 2, um por linha.
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
              <p>13</p>
            </td>
            <td>
              <p>
                2<br />
                15<br />
                28<br />
                41<br />
                ...
              </p>
            </td>
          </tr>
        </tbody>
      </table>
    </div>
  </body>
</html>

### C99

```c
#include <stdio.h>

int main(){

	int N, i;
	scanf("%i", &N);

	for(i=1; i<10000; i++)
	{
		if(i%N==2)
			printf("%i\n", i);
	}

	return 0;
}
```
