<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1079 - Médias Ponderadas</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 1 valor inteiro N, que representa o número de casos de teste
            que vem a seguir. Cada caso de teste consiste de 3 valores reais,
            cada um deles com uma casa decimal. Apresente a média ponderada para
            cada um destes conjuntos de 3 valores, sendo que o primeiro valor
            tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso
            5.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém um valor inteiro <strong>N </strong>na
            primeira linha. Cada <strong>N </strong>linha a seguir contém um
            caso de teste com três valores com uma casa decimal cada valor.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso de teste, imprima a média ponderada dos 3 valores,
            conforme exemplo abaixo.
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
                  3<br />
                  6.5 4.3 6.2<br />
                  5.1 4.2 8.1<br />
                  8.0 9.0 10.0
                </p>
              </td>
              <td>
                <p>
                  5.7<br />
                  6.3<br />
                  9.3
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

	int N, i;
	double n1, n2, n3, media;

	scanf("%i", &N);

	for(i=1; i<=N; i++)
	{
	   	scanf("%lf %lf %lf", &n1, &n2, &n3);
	   	media = (n1*0.2)+(n2*0.3)+(n3*0.5);
	   	printf("%.1lf\n", media);
	}
	return 0;
}
```
