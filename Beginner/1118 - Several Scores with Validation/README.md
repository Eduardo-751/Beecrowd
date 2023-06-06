<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1118 - Várias Notas Com Validação</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um programa para ler as notas da primeira e a segunda
            avaliação de um aluno. Calcule e imprima a média semestral. O
            programa só deverá aceitar notas válidas (uma nota válida deve
            pertencer ao intervalo [0,10]). Cada nota deve ser validada
            separadamente.
          </p>
          <p>
            No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”,
            solicitando ao usuário que informe um código (1 ou 2) indicando se
            ele deseja ou não executar o algoritmo novamente, (aceitar apenas os
            código 1 ou 2). Se for informado o código 1 deve ser repetida a
            execução de todo o programa para permitir um novo cálculo, caso
            contrário o programa deve ser encerrado.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            O arquivo de entrada contém vários valores reais, positivos ou
            negativos. Quando forem lidas duas notas válidas, deve ser lido um
            valor inteiro <strong> X </strong>. O programa deve parar quando o
            valor lido para este <strong>X</strong> for igual a 2.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Se uma nota inválida for lida, deve ser impressa a mensagem “nota
            invalida”. Quando duas notas válidas forem lidas, deve ser impressa
            a mensagem “media = ” seguido do valor do cálculo.
          </p>
          <p>
            Antes da leitura de <strong>X</strong> deve ser impressa a mensagem
            "novo calculo (1-sim 2-nao)" e esta mensagem deve ser apresentada
            novamente se o valor da entrada padrão para <strong>X</strong> for
            menor do que 1 ou maior do que 2, conforme o exemplo abaixo.
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
                  -3.5<br />
                  3.5<br />
                  11.0<br />
                  10.0<br />
                  4<br />
                  1<br />
                  8.0<br />
                  9.0<br />
                  2
                </p>
              </td>
              <td>
                <p>
                  nota invalida<br />
                  nota invalida<br />
                  media = 6.75<br />
                  novo calculo (1-sim 2-nao)<br />
                  novo calculo (1-sim 2-nao)<br />
                  media = 8.50<br />
                  novo calculo (1-sim 2-nao)
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

	float a, b, media;
	int X=1;
	while(X == 1){
		scanf("%f", &a);
		while(a<0 || a>10) {
			printf("nota invalida\n");
			scanf("%f", &a);
		}
		scanf("%f", &b);
		while(b<0 || b>10) {
			printf("nota invalida\n");
			scanf("%f", &b);
		}
		printf("media = %.2f\n", (a+b)/2);

		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%i", &X);
		while(X!=1 && X!=2) {
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%i", &X);
		}
	}
	return 0;
}
```
