<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1175 - Troca em Vetor I</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia um vetor <strong>N</strong>[20]. Troque a
            seguir, o primeiro elemento com o último, o segundo elemento com o
            penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor
            modificado.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada contém 20 valores inteiros, positivos ou negativos.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada posição do vetor <strong>N</strong>, escreva
            "N[<em>i</em>] = Y", onde <em>i</em> é a posição do vetor e<strong>
              Y</strong
            >
            é o valor armazenado naquela posição.
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
                  0<br />
                  -5<br />
                  ...<br />
                  63<br />
                  230
                </p>
              </td>
              <td>
                <p>
                  N[0] = 230<br />
                  N[1] = 63<br />
                  ...<br />
                  N[18] = -5<br />
                  N[19] = 0
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

int main() {

    int N[20], aux[20], i;
    for (i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }
    for (i = 0; i < 20; i++) {
        aux[19 - i] = N[i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, aux[i]);
    }
    return 0;
}
```
