<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1172 - Substituição em Vetor I</h1>
      <div class="problem">
        <div class="description">
          <p>
            Faça um programa que leia um vetor X[10]. Substitua a seguir, todos
            os valores nulos e negativos do vetor X por 1. Em seguida mostre o
            vetor X.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém 10 valores inteiros, podendo ser positivos ou
            negativos.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Para cada posição do vetor, escreva "X[<strong>i</strong>] =
            <strong>x</strong>", onde <strong>i</strong> é a posição do vetor e
            <strong>x</strong> é o valor armazenado naquela posição.
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
                  63<br />
                  0<br />
                  ...
                </p>
              </td>
              <td>
                <p>
                  X[0] = 1<br />
                  X[1] = 1<br />
                  X[2] = 63<br />
                  X[3] = 1<br />
                  ...
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

    int X[10];
    int i;
    for(i=0; i<10; i++) {
        scanf("%i", &X[i]);
    }
    for(i=0; i<10; i++) {
        if(X[i]<=0)
            X[i]=1;
    }
    for(i=0; i<10; i++) {
        printf("X[%i] = %i\n", i, X[i]);
    }
    return 0;
}
```
