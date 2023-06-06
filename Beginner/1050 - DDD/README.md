<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1050 - DDD</h1>
      <div class="problem">
        <div class="description">
          <p>
            Leia um número inteiro que representa um código de DDD para discagem
            interurbana. Em seguida, informe à qual cidade o DDD pertence,
            considerando a tabela abaixo:
          </p>
          <br />
          <p class="center">
            <img
              alt=""
              src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1050.png"
              style="width: 368px; height: 175px"
            />
          </p>
          <p>
            Se a entrada for qualquer outro DDD que não esteja presente na
            tabela acima, o programa deverá informar:<br />
            DDD nao cadastrado
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>A entrada consiste de um único valor inteiro.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Imprima o nome da cidade correspondente ao DDD existente na entrada.
            Imprima <em>DDD nao cadastrado</em> caso não existir DDD
            correspondente ao número digitado.
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
                <p>11</p>
              </td>
              <td>
                <p>Sao Paulo</p>
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

    int DDD;
    scanf("%i", &DDD);

    if(DDD == 61)
        printf("Brasilia\n");
    else if(DDD == 71)
        printf("Salvador\n");
    else if(DDD == 11)
        printf("Sao Paulo\n");
    else if(DDD == 21)
        printf("Rio de Janeiro\n");
    else if(DDD == 32)
        printf("Juiz de Fora\n");
    else if(DDD == 19)
        printf("Campinas\n");
    else if(DDD == 27)
        printf("Vitoria\n");
    else if(DDD == 31)
        printf("Belo Horizonte\n");
    else
        printf("DDD nao cadastrado\n");

    return 0;
}
```
