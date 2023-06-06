<div class="problem">
  <div class="description">
    <p>
      O jogo de xadrez possui várias peças com movimentos curiosos: uma delas é
      a <em>dama</em>, que pode se mover qualquer quantidade de casas na mesma
      linha, na mesma coluna, ou em uma das duas diagonais, conforme exemplifica
      a figura abaixo:
    </p>
    <p class="center">
      <br />
      <img
        alt=""
        src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1087.png"
        style="width: 147px; height: 145px"
      />
    </p>
    <br />
    <p>
      O grande mestre de xadrez Kary Gasparov inventou um novo tipo de problema
      de xadrez: dada a posição de uma dama em um tabuleiro de xadrez vazio (ou
      seja, um tabuleiro 8 × 8, com 64 casas), de quantos movimentos, no mínimo,
      ela precisa para chegar em outra casa do tabuleiro?
    </p>
    <p>
      Kary achou a solução para alguns desses problemas, mas teve dificuldade
      com outros, e por isso pediu que você escrevesse um programa que resolve
      esse tipo de problema. &nbsp;
    </p>
  </div>
  <h2>Entrada</h2>
  <div class="input">
    <p>
      A entrada contém vários casos de teste. A primeira e única linha de cada
      caso de teste contém quatro inteiros <i>X<sub>1</sub></i
      >, <i>Y<sub>1</sub></i
      >, <i>X<sub>2</sub></i> <span class="code">e </span
      ><i>Y<sub>2</sub></i> (<i
        >1 ≤ X<sub>1</sub>, Y<sub>1</sub>, X<sub>2</sub>, Y<sub>2</sub> ≤ 8</i
      >). A dama começa na casa de coordenadas
      <i>(X<sub>1</sub>, Y<sub>1</sub>)</i>, e a casa de destino é a casa de
      coordenadas<i>(X<sub>2</sub>, Y<sub>2</sub>)</i>. No tabuleiro, as colunas
      são numeradas da esquerda para a direita de 1 a 8 e as linhas de cima para
      baixo também de 1 a 8. As coordenadas de uma casa na linha X e coluna Y
      são (<em>X, Y</em> ).
    </p>
    <p>O final da entrada é indicado por uma linha contendo quatro zeros.</p>
  </div>
  <h2>Saída</h2>
  <div class="output">
    <p>
      Para cada caso de teste da entrada seu programa deve imprimir uma única
      linha na saída, contendo um número inteiro, indicando o menor número de
      movimentos necessários para a dama chegar em sua casa de destino.
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
            4 4 6 2<br />
            3 5 3 5<br />
            5 5 4 3<br />
            0 0 0 0
          </p>
        </td>
        <td>
          <p>
            1<br />
            0<br />
            2
          </p>
        </td>
      </tr>
    </tbody>
  </table>
</div>

### C99

```c
#include <stdio.h>

int main()
{
    int x1, x2, y1, y2, n = 2, dx, dy;
    do
    {
        scanf("%i %i %i %i", &x1, &y1, &x2, &y2);
        if (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0)
        {
            dx = x2 - x1;
            dy = y2 - y1;
            if (dx < 0)
                dx = dx * (-1);
            if (dy < 0)
                dy = dy * (-1);
            n = 2;
            if (x1 == x2 && y1 == y2)
                n = 0;
            else if (x1 == x2 || y1 == y2 || dy == dx)
                n = 1;
            printf("%i\n", n);
        }
    } while (x1 != 0 && x2 != 0 && y1 != 0 && y2 != 0);
    return 0;
}
```
