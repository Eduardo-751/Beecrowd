<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1094 - Experiências</h1>
      <div class="problem">
        <div class="description">
          <p>
            Maria acabou de iniciar seu curso de graduação na faculdade de
            medicina e precisa de sua ajuda para organizar os experimentos de um
            laboratório o qual ela é responsável. Ela quer saber no final do
            ano, quantas cobaias foram utilizadas no laboratório e o percentual
            de cada tipo de cobaia utilizada.
          </p>
          <p>
            Este laboratório em especial utiliza três tipos de cobaias: sapos,
            ratos e coelhos. Para obter estas informações, ela sabe exatamente o
            número de experimentos que foram realizados, o tipo de cobaia
            utilizada e a quantidade de cobaias utilizadas em cada experimento.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha de entrada contém um valor inteiro
            <strong>N</strong> que indica os vários casos de teste que vem a
            seguir. Cada caso de teste contém um inteiro
            <strong>Quantia</strong> (1 ≤ <strong>Quantia</strong> ≤ 15) que
            representa a quantidade de cobaias utilizadas e um caractere
            <strong>Tipo</strong> ('C', 'R' ou 'S'), indicando o tipo de cobaia
            (<em>R</em>:Rato <em>S</em>:Sapo <em>C</em>:Coelho).
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Apresente o total de cobaias utilizadas, o total de cada tipo de
            cobaia utilizada e o percentual de cada uma em relação ao total de
            cobaias utilizadas, sendo que o percentual deve ser apresentado com
            dois dígitos após o ponto.
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
                  10<br />
                  10 C<br />
                  6 R<br />
                  15 S<br />
                  5 C<br />
                  14 R<br />
                  9 C<br />
                  6 R<br />
                  8 S<br />
                  5 C<br />
                  14 R
                </p>
              </td>
              <td>
                <p>
                  Total: 92 cobaias<br />
                  Total de coelhos: 29<br />
                  Total de ratos: 40<br />
                  Total de sapos: 23<br />
                  Percentual de coelhos: 31.52 %<br />
                  Percentual de ratos: 43.48 %<br />
                  Percentual de sapos: 25.00 %
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

    char Tipo;
    int Teste, Cobaia, Total=0;
    int Coelho=0, Rato=0, Sapo=0;

    scanf("%i", &Teste);

    while(Teste>0){

        scanf("%i %c", &Cobaia, &Tipo);

        Total += Cobaia;

        switch(Tipo){
            case 'C':{
                Coelho += Cobaia;
                break;
            }
            case 'R':{
                Rato += Cobaia;
                break;
            }
            case 'S':{
                Sapo += Cobaia;
                break;
            }
        }
        Teste--;
    }

    printf("Total: %i cobaias\n", Total);
    printf("Total de coelhos: %i\n", Coelho);
    printf("Total de ratos: %i\n", Rato);
    printf("Total de sapos: %i\n", Sapo);
    printf("Percentual de coelhos: %.2f %%\n", (float)(Coelho*100)/Total);
    printf("Percentual de ratos: %.2f %%\n", (float)(Rato*100)/Total);
    printf("Percentual de sapos: %.2f %%\n", (float)(Sapo*100)/Total);

    return 0;
}
```
