<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1155 - Sequência S</h1>
      <div class="problem">
        <div class="description">
          <p>
            Escreva um algoritmo para calcular e escrever o valor de S, sendo S
            dado pela fórmula:<br />
            S = 1 + 1/2 + 1/3 + … + 1/100
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
    float Sum=0, i;
    for(i=1; i<=100; i++){
        Sum+=1/i;
    }
    printf("%.2f\n", Sum);
    return 0;
}
```
