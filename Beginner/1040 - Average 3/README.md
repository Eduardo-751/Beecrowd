<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1040 - Média 3</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia quatro números (N<sub>1</sub>, N<sub>2</sub>, N<sub>3</sub>,
            N<sub>4</sub>), cada um deles com uma casa decimal, correspondente
            às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
            respectivamente, para cada uma destas notas e mostre esta média
            acompanhada pela mensagem <em>"Media: "</em>. Se esta média for
            maior ou igual a 7.0, imprima a mensagem <em>"Aluno aprovado."</em>.
            Se a média calculada for inferior a 5.0, imprima a mensagem
            <em>"Aluno reprovado."</em>. Se a média calculada for um valor entre
            5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem
            <em>"Aluno em exame."</em>.
          </p>
          <p>
            No caso do aluno estar em exame, leia um valor correspondente à nota
            do exame obtida pelo aluno. Imprima então a mensagem
            <em>"Nota do exame: "</em> acompanhada pela nota digitada. Recalcule
            a média (some a pontuação do exame com a média anteriormente
            calculada e divida por 2). e imprima a mensagem
            <em>"Aluno aprovado."</em> (caso a média final seja 5.0 ou mais ) ou
            <em>"Aluno reprovado."</em>, (caso a média tenha ficado 4.9 ou
            menos). Para estes dois casos (aprovado ou reprovado após ter pego
            exame) apresente na última linha uma mensagem
            <em>"Media final: "</em> seguido da média final para esse aluno.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém quatro números de ponto flutuante correspendentes
            as notas dos alunos.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Todas as respostas devem ser apresentadas com uma casa decimal. As
            mensagens devem ser impressas conforme a descrição do problema. Não
            esqueça de imprimir o <em>enter</em> após o final de cada linha,
            caso contrário obterá "Presentation Error".
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
                <p>
                  2.0 4.0 7.5 8.0<br />
                  6.4
                </p>
              </td>

              <td>
                <p>
                  Media: 5.4<br />
                  Aluno em exame.<br />
                  Nota do exame: 6.4<br />
                  Aluno aprovado.<br />
                  Media final: 5.9
                </p>
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
                <p>2.0 6.5 4.0 9.0</p>
              </td>

              <td>
                <p></p>
                <p>
                  Media: 4.8<br />
                  Aluno reprovado.
                </p>
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
                <p>9.0 4.0 8.5 9.0</p>
              </td>
              <td>
                <p>
                  Media: 7.3<br />
                  Aluno aprovado.
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
#include <math.h>


int main(){

    double m1, m2, m3, m4, med1, med2, medfinal;
    scanf("%lf %lf %lf %lf", &m1, &m2, &m3, &m4);
    med1 =(m1*0.2)+(m2*0.3)+(m3*0.4)+(m4*0.1);
    printf("Media: %.1lf\n", med1);
    if(med1>=7){
        printf("Aluno aprovado.\n");
    }
    else if(med1>=5 && med1<7){
        printf("Aluno em exame.\n");
        scanf("%lf", &med2);
        printf("Nota do exame: %.1lf\n", med2);
        medfinal = (med1+med2)/2;
        if(medfinal >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medfinal);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}
```
