<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1078 - Tabuada</h1>
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
          Leia 1 valor inteiro N (2 &lt; N &lt; 1000). A seguir, mostre a
          tabuada de N:&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;<br />
          1 x N = N&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2 x N =
          2N&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
          ...&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 10 x N = 10N
        </p>
      </div>
      <h2>Entrada</h2>
      <div class="input">
        <p>
          A entrada contém um valor inteiro <strong>N </strong>(2 &lt;
          <strong>N </strong>&lt; 1000).
        </p>
      </div>
      <h2>Saída</h2>
      <div class="output">
        <p>Imprima a tabuada de N, conforme o exemplo fornecido.</p>
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
              <p>140</p>
            </td>
            <td>
              <p>
                1 x 140 = 140<br />
                2 x 140 = 280<br />
                3 x 140 = 420<br />
                4 x 140 = 560<br />
                5 x 140 = 700<br />
                6 x 140 = 840<br />
                7 x 140 = 980<br />
                8 x 140 = 1120<br />
                9 x 140 = 1260<br />
                10 x 140 = 1400
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

	for(i=1; i<=10; i++)
	{
	   	printf("%i x %i = %i\n", i, N, N*i);
	}

	return 0;
}
```
