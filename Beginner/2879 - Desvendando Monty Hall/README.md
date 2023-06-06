<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>2879 - Desvendando Monty Hall</h1>
      <div class="problem">
        <div class="description">
          <p>
            No palco de um programa de auditório há três portas fechadas: porta
            1, porta 2 e porta 3. Atrás de uma dessas portas há um carro, atrás
            de cada uma das outras duas portas há um bode. A produção do
            programa sorteia aleatoriamente a porta onde vai estar o carro, sem
            trapaça. Somente o apresentador do programa sabe onde está o carro.
            Ele pede para o jogador escolher uma das portas. Veja que agora,
            como só&nbsp;há um carro, atrás de pelo menos uma entre as duas
            portas que o jogador não escolheu, tem que haver um bode!
          </p>
          <p>
            Portanto, o apresentador sempre pode fazer o seguinte: entre as duas
            portas que o jogador não escolheu, ele abre uma que tenha um bode,
            de modo que o jogador e os espectadores possam ver o bode. O
            apresentador, agora, pergunta ao jogador: “você quer trocar sua
            porta pela outra porta que ainda está fechada?”. E vantajoso trocar
            ou não? O jogador quer ficar com a porta que tem o carro, claro!
          </p>
          <p>
            Paulinho viu uma demonstração rigorosa de que a probabilidade de o
            carro estar atrás da porta que o jogador escolheu inicialmente é 1/3
            e a probabilidade de o carro estar atrás da outra porta, que ainda
            está&nbsp;fechada e que o jogador não escolheu inicialmente,
            é&nbsp;2/3 e, portanto, a troca é vantajosa. Paulinho não se
            conforma, sua intuição lhe diz que tanto faz, que a probabilidade
            é&nbsp;1/2 para ambas as portas ainda fechadas...
          </p>
          <p>
            Neste problema, para acabar com a dúvida do Paulinho, vamos simular
            esse jogo milhares de vezes e contar quantas vezes o jogador ganhou
            o carro. Vamos supor que:
          </p>
          <p>• O jogador sempre escolhe inicialmente a porta 1;</p>
          <p>
            • O jogador sempre troca de porta, depois que o apresentador revela
            um bode abrindo uma das duas portas que não foram escolhidas
            inicialmente.
          </p>
          <p>
            Nessas condições, em um jogo, dado o número da porta que contém o
            carro, veja que podemos saber exatamente se o jogador vai ganhar ou
            não o carro.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha da entrada contém um inteiro <strong>N</strong> (1
            ≤ <strong>N</strong> ≤ 10<sup>4</sup>&nbsp;), indicando o número de
            jogos na simulação. Cada uma das <strong>N</strong> linhas seguintes
            contém um inteiro: 1, 2 ou 3; representando o número da porta que
            contém o carro naquele jogo.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Seu programa deve produzir uma única linha, contendo um inteiro
            representando o número de vezes que o jogador ganhou o carro nessa
            simulação, supondo que ele sempre escolhe inicialmente a porta 1 e
            sempre troca de porta depois que o apresentador revela um bode
            abrindo uma das duas portas que não foram escolhidas inicialmente.
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
                <p>5</p>
                <p>1</p>
                <p>3</p>
                <p>2</p>
                <p>2</p>
                <p>1</p>
              </td>
              <td>
                <p>3</p>
              </td>
            </tr>
          </tbody>
        </table>
        <div class="both"></div>
        <table>
          <thead></thead>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>1</p>
                <p>1</p>
              </td>
              <td>
                <p>0</p>
              </td>
            </tr>
          </tbody>
        </table>
        <div class="both"></div>
        <table>
          <thead></thead>
          <tbody>
            <tr>
              <td>Exemplos de Entrada</td>
              <td>Exemplos de Saída</td>
            </tr>
            <tr>
              <td class="division">
                <p>15</p>
                <p>3</p>
                <p>2</p>
                <p>3</p>
                <p>1</p>
                <p>1</p>
                <p>3</p>
                <p>3</p>
                <p>2</p>
                <p>2</p>
                <p>1</p>
                <p>2</p>
                <p>3</p>
                <p>2</p>
                <p>1</p>
                <p>1</p>
              </td>
              <td>
                <p>10</p>
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

    int num, A=0, B=0, i;
    scanf("%i", &num);
    int testes[num];
    for(i=0; i<num; i++){
        scanf("%i", &testes[i]);
    }
    for(i=0; i<num; i++){
        if(testes[i]==1)
            A++;
        else
            B++;
    }
    printf("%i\n", B);
    return 0;
}
```
