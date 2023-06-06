<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1164 - Número Perfeito</h1>
      <div class="problem">
        <div class="description">
          <p>
            Na matemática, um número perfeito é um número inteiro para o qual a
            soma de todos os seus divisores positivos próprios (excluindo ele
            mesmo) é igual ao próprio número. Por exemplo o número 6 é perfeito,
            pois 1+2+3 é igual a 6. Sua tarefa é escrever um programa que
            imprima se um determinado número é perfeito ou não.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém vários casos de teste. A primeira linha da entrada
            contém um inteiro <strong>N </strong> (1 ≤ <strong>N</strong> ≤ 20),
            indicando o número de casos de teste da entrada. Cada uma das
            <strong>N</strong> linhas seguintes contém um valor inteiro
            <strong>X</strong> (1 ≤ <strong>X</strong> ≤ 10<sup>8</sup>), que
            pode ser ou não, um número perfeito.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso de teste de entrada, imprima a mensagem “<strong
              >X </strong
            >eh perfeito” ou “<strong>X </strong>nao eh perfeito”, de acordo com
            a especificação fornecida.
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
                  3<br />
                  6<br />
                  5<br />
                  28
                </p>
              </td>
              <td>
                <p>
                  6 eh perfeito<br />
                  5 nao eh perfeito<br />
                  28 eh perfeito
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

    int N, X, Sum;
    int i, i2;

    scanf("%i", &N);
    for (i = 0; i < N; i++)
    {
        Sum = 0;
        scanf("%i", &X);
        for (i2 = 1; i2 < X; i2++)
        {
            if (X % i2 == 0)
                Sum += i2;
        }
        if (Sum == X)
            printf("%i eh perfeito\n", X);
        else
            printf("%i nao eh perfeito\n", X);
    }
    return 0;
}
```
