<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1117 - Validação de Nota</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia as notas referentes às duas avaliações de
            um aluno. Calcule e imprima a média semestral. Faça com que o
            algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
            intervalo [0,10]). Cada nota deve ser validada separadamente.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém vários valores reais, positivos ou negativos. O
            programa deve ser encerrado quando forem lidas duas notas válidas.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Se uma nota inválida&nbsp; for lida, deve ser impressa a mensagem
            "nota invalida".<br />
            Quando duas notas válidas forem lidas, deve ser impressa a mensagem
            "media = " seguido do valor do cálculo. O valor deve ser apresentado
            com duas casas após o ponto decimal.
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
                  10.0
                </p>
              </td>
              <td>
                <p>
                  nota invalida<br />
                  nota invalida<br />
                  media = 6.75
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
	return 0;
}
```
