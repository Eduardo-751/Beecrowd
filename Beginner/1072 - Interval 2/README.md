<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1072 - Intervalo 2</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um valor inteiro <strong>N</strong>. Este valor será a
            quantidade de valores inteiros <strong>X </strong>que serão lidos em
            seguida.<br />
            Mostre quantos destes valores <strong>X </strong>estão dentro do
            intervalo [10,20] e quantos estão fora do intervalo, mostrando essas
            informações.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A primeira linha da entrada contém um valor inteiro
            <strong>N </strong>(<strong>N </strong>&lt; 10000), que indica o
            número de casos de teste.<br />
            Cada caso de teste a seguir é um valor inteiro
            <strong>X </strong>(-10<sup>7</sup> &lt;
            <strong>X</strong> &lt;10<sup>7</sup>).<br />
            &nbsp;
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada caso, imprima quantos números estão dentro
            (<strong>in</strong>) e quantos valores estão fora
            (<strong>out</strong>) do intervalo.
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
                  4<br />
                  14<br />
                  123<br />
                  10<br />
                  -25
                </p>
              </td>
              <td>
                <p>
                  2 in<br />
                  2 out
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

    double aux;
    int casos, i, in=0, out=0;

    scanf("%i", &casos);

    for(i=0; i<casos; i++){
        scanf("%lf", &aux);

        if(aux>=10 && aux<=20)
            in++;

        else
            out++;
    }

    printf("%i in\n", in);
    printf("%i out\n", out);

    return 0;
}
```
