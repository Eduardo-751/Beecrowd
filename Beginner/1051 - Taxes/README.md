<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1051 - Imposto de Renda</h1>
      <div class="problem">
        <div class="description">
          <p>
            Em um país imaginário denominado Lisarb, todos os habitantes ficam
            felizes em pagar seus impostos, pois sabem que nele não existem
            políticos corruptos e os recursos arrecadados são utilizados em
            benefício da população, sem qualquer desvio. A moeda deste país é o
            Rombus, cujo símbolo é o R$.
          </p>
          <p>
            Leia um valor com duas casas decimais, equivalente ao salário de uma
            pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta
            pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.
          </p>
          <p class="center">
            <img
              alt=""
              src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1051_pt.png"
              style="width: 491px; height: 99px"
            />
          </p>
          <p>
            Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8%
            apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00
            até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido
            (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que
            resulta em R$ 80.36 no total. O valor deve ser impresso com duas
            casas decimais.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém apenas um valor de ponto flutuante, com duas casas
            decimais.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima o texto "R$" seguido de um espaço e do valor total devido de
            Imposto de Renda, com duas casas após o ponto. Se o valor de entrada
            for menor ou igual a 2000, deverá ser impressa a mensagem "Isento".
          </p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>3002.00</p>
              </td>
              <td>
                <p>R$ 80.36</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>1701.12</p>
              </td>
              <td>
                <p>Isento</p>
              </td>
            </tr>
          </tbody>
        </table>
        <table>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>4520.00</p>
              </td>
              <td>
                <p>R$ 355.60</p>
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
#include <math.h>

int main(){

    double salario, imposto=0;

    scanf("%lf", &salario);

    if(salario > 4500){
        imposto = imposto + (salario-4500)*0.28;
        imposto = imposto + (1500*0.18);
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000){
        imposto = imposto + (salario-3000)*0.18;
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 2000){
        imposto = imposto + (salario-2000)*0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else
        printf("Isento\n");

    return 0;
}
```
