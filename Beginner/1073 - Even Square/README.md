<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1073 - Quadrado de Pares</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>N</strong>. Apresente o quadrado de
            cada um dos valores pares, de 1 até <strong>N</strong>, inclusive
            <strong>N</strong>, se for o caso.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém um valor inteiro <strong>N </strong>(5 &lt;
            <strong>N </strong>&lt; 2000).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima o quadrado de cada um dos valores pares, de 1 até
            <strong>N</strong>, conforme o exemplo abaixo.
          </p>
          <p>
            Tome cuidado! Algumas linguagens tem por padrão apresentarem como
            saída 1e+006 ao invés de 1000000 o que ocasionará resposta errada.
            Neste caso, configure a precisão adequadamente para que isso não
            ocorra.
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
                <p>6</p>
              </td>
              <td>
                <p>
                  2^2 = 4<br />
                  4^2 = 16<br />
                  6^2 = 36<br />
                  &nbsp;
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

	int max, i;

	scanf("%i", &max);

	for(i=2; i<=max; i++){
		if(i%2 == 0)
			printf("%i^2 = %i\n", i, i*i);
	}

	return 0;
}
```
