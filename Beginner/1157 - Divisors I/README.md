<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1157 - Divisores I</h1>
      <div class="problem">
        <div class="description">
          <p>Ler um número inteiro N e calcular todos os seus divisores.</p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>O arquivo de entrada contém um valor inteiro.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Escreva todos os divisores positivos de N, um valor por linha.</p>
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
                <p>6</p>
              </td>
              <td>
                <p>
                  1<br />
                  2<br />
                  3<br />
                  6
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

    int N, i;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        if(N%i == 0)
            printf("%i\n", i);
    }
    return 0;
}
```
