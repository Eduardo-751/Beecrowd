<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1035 - Teste de Seleção 1</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que
            C e se D for maior do que A, e a soma de C com D for maior que a
            soma de A e B e se C e D, ambos, forem positivos e se a variável A
            for par escrever a mensagem <strong>"Valores aceitos"</strong>,
            senão escrever <strong>"Valores nao aceitos"</strong>.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>Quatro números inteiros A, B, C e D.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Mostre a respectiva mensagem após a validação dos valores.</p>
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
                <p>5 6 7 8</p>
              </td>
              <td>
                <p>Valores nao aceitos</p>
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
                <p>2 3 2 6</p>
              </td>
              <td>
                <p>Valores aceitos</p>
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

    int A, B, C, D;

    scanf("%i %i %i %i", &A, &B, &C, &D);

    if(B>C && D>A && C+D > A+B && C > 0 && D > 0 && A % 2 == 0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
```
