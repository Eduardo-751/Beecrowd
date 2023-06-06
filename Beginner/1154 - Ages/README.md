<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1154 - Idades</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um algoritmo para ler um número indeterminado de dados,
            contendo cada um, a idade de um indivíduo. O último dado, que não
            entrará nos cálculos, contém o valor de idade negativa. Calcular e
            imprimir a idade média deste grupo de indivíduos.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém um número indeterminado de inteiros. A entrada será
            encerrada quando um valor negativo for lido.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            A saída contém um valor correspondente à média de idade dos
            indivíduos.
          </p>
          <p>
            A média deve ser impressa com dois dígitos após o ponto decimal.
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
                  34<br />
                  56<br />
                  44<br />
                  23<br />
                  -2
                </p>
              </td>
              <td>
                <p>39.25</p>
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

	int Idade, Soma, N=0;
	double Media;
	do {
		scanf("%i", &Idade);
		if(Idade >= 0){
			Soma+=Idade;
			N++;
		}
	}while(Idade>=0);
	Media = (double)Soma/N;
	printf("%.2lf\n", Media);
	return 0;
}
```
