<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1074 - Par ou Ímpar</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>N</strong>. Este valor será a
            quantidade de valores que serão lidos em seguida. Para cada valor
            lido, mostre uma mensagem em inglês dizendo se este valor lido é par
            (<em>EVEN</em>), ímpar (<em>ODD</em>), positivo (<em>POSITIVE</em>)
            ou negativo (<em>NEGATIVE</em>). No caso do valor ser igual a zero
            (0), embora a descrição correta seja (<em>EVEN NULL</em>), pois por
            definição zero é par, seu programa deverá imprimir apenas
            <em>NULL</em>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha da entrada contém um valor inteiro
            <strong>N</strong>(<strong>N </strong>&lt; 10000) que indica o
            número de casos de teste. Cada caso de teste a seguir é um valor
            inteiro <strong>X </strong>(-10<sup>7</sup> &lt;
            <strong>X</strong> &lt;10<sup>7</sup>).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso, imprima uma mensagem correspondente, de acordo com o
            exemplo abaixo. Todas as letras deverão ser maiúsculas e sempre
            deverá haver um espaço <strong>entre</strong> duas palavras
            impressas na mesma linha.
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
                  4<br />
                  -5<br />
                  0<br />
                  3<br />
                  -4
                </p>
              </td>
              <td>
                <p>
                  ODD NEGATIVE<br />
                  NULL<br />
                  ODD POSITIVE<br />
                  EVEN NEGATIVE
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

	int testes, aux, i;

	scanf("%i", &testes);

	for(i=0; i<testes; i++)
	{
		scanf("%i", &aux);

		if(aux%2==0 && aux!=0)
			printf("EVEN ");
		else if((aux%2==1 || aux%2==-1) && aux!=0)
			printf("ODD ");

		if(aux>0)
			printf("POSITIVE\n");
		else if(aux<0)
			printf("NEGATIVE\n");
		else
			printf("NULL\n");
	}

	return 0;
}
```
