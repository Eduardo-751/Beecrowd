<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1099 - Soma de Ímpares Consecutivos II</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>N</strong> que é a quantidade de casos
            de teste que vem a seguir. Cada caso de teste consiste de dois
            inteiros <strong>X</strong> e <strong>Y</strong>. Você deve
            apresentar a soma de todos os ímpares existentes
            <em><strong>entre</strong></em> <strong>X </strong>e
            <strong>Y</strong>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha de entrada é um inteiro <strong>N </strong>que é a
            quantidade de casos de teste que vem a seguir. Cada caso de teste
            consiste em uma linha contendo dois inteiros <strong>X</strong> e
            <strong>Y</strong>.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a soma de todos valores ímpares
            <strong><em>entre </em>X </strong>e <strong>Y</strong>.
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
                <p>7</p>
                <p>4 5</p>
                <p>13 10</p>
                <p>6 4</p>
                <p>3 3</p>
                <p>3 5</p>
                <p>3 4</p>
                <p>3 8</p>
              </td>
              <td>
                <p>0</p>
                <p>11</p>
                <p>5</p>
                <p>0</p>
                <p>0</p>
                <p>0</p>
                <p>12</p>
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

	int N, X, Y, Soma=0;
	scanf("%i", &N);
	while(N>0){

		scanf("%i %i", &X, &Y);
		if(X<Y){
			X++;
			for(X; X<Y; X++){
				if(X%2 == 1)
					Soma+=X;
			}
		}
		else{
			Y++;
			for(Y; Y<X; Y++){
				if(Y%2 == 1)
					Soma+=Y;
			}
		}
		printf("%i\n", Soma);
		Soma=0;
		N--;
	}
	return 0;
}
```
