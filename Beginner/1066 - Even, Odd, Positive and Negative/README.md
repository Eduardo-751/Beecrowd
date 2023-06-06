<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1066 - Pares, Ímpares, Positivos e Negativos</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia 5 valores Inteiros. A seguir mostre quantos valores digitados
            foram pares, quantos valores digitados foram ímpares, quantos
            valores digitados foram positivos e quantos valores digitados foram
            negativos.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém 5 valores inteiros quaisquer.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima a mensagem conforme o exemplo fornecido, uma mensagem por
            linha, não esquecendo o final de linha após cada uma.
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
                  -5<br />
                  0<br />
                  -3<br />
                  -4<br />
                  12
                </p>
              </td>
              <td>
                <p>
                  3 valor(es) par(es)<br />
                  2 valor(es) impar(es)<br />
                  1 valor(es) positivo(s)<br />
                  3 valor(es) negativo(s)
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

    int i, a=0, b=0, c=0, d=0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
        else
            b++;
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            d++;
    }
    printf("%i valor(es) par(es)\n", a);
    printf("%i valor(es) impar(es)\n", b);
    printf("%i valor(es) positivo(s)\n", c);
    printf("%i valor(es) negativo(s)\n", d);
    return 0;
}
```
