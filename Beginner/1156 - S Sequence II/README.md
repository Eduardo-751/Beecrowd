<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1156 - Sequência S II</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um algoritmo para calcular e escrever o valor de S, sendo S
            dado pela fórmula:<br />
            S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>Não há nenhuma entrada neste problema.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            A saída contém um valor correspondente ao valor de S.<br />
            O valor deve ser impresso com dois dígitos após o ponto decimal.
          </p>
        </div>
      </div>
    </div>
  </body>
</html>

### C99

```c
#include <stdio.h>

int main() {

    float Sum=0, i, i2=1;
    for(i=1; i<=39; i+=2){
        Sum+=i/i2;
        i2*=2;
    }
    printf("%.2f\n", Sum);
    return 0;
}
```
