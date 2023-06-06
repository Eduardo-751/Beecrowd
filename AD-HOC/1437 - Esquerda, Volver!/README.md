<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1437 - Esquerda, Volver!</h1>
      <div class="problem">
        <div class="description">
          Este ano o sargento está tendo mais trabalho do que de costume para
          treinar os recrutas. Um deles é muito atrapalhado, e de vez em quando
          faz tudo errado – por exemplo, ao invés de virar à direita quando
          comandado, vira à esquerda, causando grande confusão no batalhão. O
          sargento tem fama de durão e não vai deixar o recruta em paz enquanto
          este não aprender a executar corretamente os comandos. No sábado à
          tarde, enquanto todos os outros recrutas estão de folga, ele obrigou o
          recruta a fazer um treinamento extra. Com o recruta marchando parado
          no mesmo lugar, o sargento emitiu uma série de comandos "Esquerda,
          Volver!" e "Direita, Volver!". A cada comando, o recruta deve girar
          sobre o mesmo ponto e dar um quarto de volta na direção correspondente
          ao comando. Por exemplo, se o recruta está inicialmente com o rosto
          voltado para a direção norte, após um comando de "esquerda volver!"
          ele deve ficar com o rosto voltado para a direção oeste. Se o recruta
          está inicialmente com o rosto voltado para o leste, após um comando
          "Direita, volver!" ele deve ter o rosto voltado para o sul. No
          entanto, durante o treinamento, em que o recruta tinha inicialmente o
          rosto voltado para o norte, o sargento emitiu uma série tão extensa de
          comandos, e tão rapidamente, que até ele ficou confuso, e não sabe
          mais para qual direção o recruta deve ter seu rosto voltado após
          executar todos os comandos. Você pode ajudar o sargento?
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém vários casos de teste. A primeira linha de um caso
            de teste contém um inteiro <strong>N</strong> que indica o número de
            comandos emitidos pelo sargento (1 &le; <strong>N</strong> &le;
            1000)). A segunda linha contém <strong>N</strong> caracteres,
            descrevendo a série de comandos emitidos pelo sargento. Cada comando
            é representado por uma letra: 'E' (para "Esquerda, volver!") e 'D'
            (para "direita, volver!"). O final da entrada é indicado por
            <strong>N</strong> = 0.
          </p>
          <p>A entrada deve ser lida da entrada padrão.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso de teste da entrada seu programa deve produzir uma
            única linha da saída, indicando a direção para a qual o recruta deve
            ter sua face voltada após executar a série de comandos, considerando
            que no início o recruta tem a face voltada para o norte. A linha
            deve conter uma letra entre 'N', 'L', 'S' e 'O', representando
            respectivamente as direções norte, leste, sul e oeste.
          </p>
          <p>A saída deve ser escrita na saída padrão.</p>
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
                  DDE<br />
                  2<br />
                  EE<br />
                  0
                </p>
              </td>
              <td>
                <p>
                  L<br />
                  S
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

int main()
{
    int T = 1, i, t1, t2, ondas = 0, V[10000];
    while (T != 0)
    {
        scanf("%i", &T);
        if (T != 0)
        {
            for (i = 0; i < T; i++)
                scanf("%i", &V[i]);
            V[T] = V[0];
            V[T + 1] = V[1];
            for (i = 1; i < T + 1; i++)
            {
                t1 = i + 1;
                t2 = i - 1;
                if (V[i] > V[t1] && V[i] > V[t2])
                    ondas++;
                if (V[i] < V[t1] && V[i] < V[t2])
                    ondas++;
            }
            printf("%i\n", ondas);
            ondas = 0;
        }
    }
    return 0;
}
```
