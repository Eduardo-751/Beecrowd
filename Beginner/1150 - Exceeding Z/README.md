<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1150 - Ultrapassando Z</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia dois inteiros: <strong>X</strong> e
            <strong>Z</strong> (devem ser lidos tantos valores para
            <strong>Z</strong> quantos necessários, até que seja digitado um
            valor maior do que <strong>X</strong> para ele). Conte quantos
            números inteiros devem ser somados em sequência (considerando o
            <strong>X</strong> nesta soma) para que a soma ultrapasse a
            <strong>Z</strong> o mínimo possível. Escreva o valor final da
            contagem. <br />
            <br />
            A entrada pode conter, por exemplo, os valores 21 21 15 30. Neste
            caso, é então assumido o valor 21 para <strong>X</strong> enquanto
            os valores 21 e 15 devem ser desconsiderados pois são menores ou
            iguais a <strong>X</strong>. Como o valor 30 está dentro da
            especificação (maior do que <strong>X</strong>) ele será válido e
            então deve-se processar os cálculos para apresentar na saída o valor
            2, pois é a quantidade de valores somados para se produzir um valor
            maior do que 30 (21 + 22).
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém somente valores inteiros, um por linha, podendo ser
            positivos ou negativos. O primeiro valor da entrada será o valor de
            <strong>X</strong>. A próxima linha da entrada irá conter
            <strong>Z</strong>. Se <strong>Z</strong> não atender a
            especificação do problema, ele deverá ser lido novamente, tantas
            vezes quantas forem necessárias.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima uma linha com um número inteiro que representa a quantidade
            de números inteiros que devem ser somadas, de acordo com a
            especificação acima.
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
                  1<br />
                  20
                </p>
              </td>
              <td>
                <p>5</p>
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

	int X, Z, i;
	scanf("%i", &X);

	do {
		scanf("%i", &Z);
	}while(Z<=X);
	int Soma = X;
	for(i=1; Soma<=Z; i++) {
		Soma += (X+i);
	}

	printf("%i\n", i);
	return 0;
}
```
