<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1049 - Animal</h1>
      <div class="problem">
        <div class="description">
          <p>
            Neste problema, você deverá ler 3 palavras que definem o tipo de
            animal possível segundo o esquema abaixo, da esquerda para a
            direita.&nbsp; Em seguida conclua qual dos animais seguintes foi
            escolhido, através das três palavras fornecidas.
          </p>
          <p class="center">
            <img
              alt=""
              src="https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1049_b.png"
              style="width: 600px; height: 459px"
            />
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            A entrada contém 3 palavras, uma em cada linha, necessárias para
            identificar o animal segundo a figura acima, com todas as letras
            minúsculas.
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima o nome do animal correspondente à entrada fornecida.</p>
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
                <p>
                  vertebrado<br />
                  mamifero<br />
                  onivoro
                </p>
              </td>
              <td>
                <p>homem</p>
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
                <p>
                  vertebrado<br />
                  ave<br />
                  carnivoro
                </p>
              </td>
              <td>
                <p>aguia</p>
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
                <p>
                  invertebrado<br />
                  anelideo<br />
                  onivoro
                </p>
              </td>
              <td>
                <p>minhoca</p>
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
#include <string.h>
#include <stdio.h>

int main()
{
    char group[3][20];

    for (int i = 0; i < 3; ++i) {
        scanf("%s\n", &group[i]);
    }

    if (strcmp(group[0], "vertebrado") == 0) {
        if (strcmp(group[1], "ave") == 0) {
            if (strcmp(group[2], "carnivoro") == 0)
                printf("aguia\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("pomba\n");
        }
        else if (strcmp(group[1], "mamifero") == 0) {
            if (strcmp(group[2], "onivoro") == 0)
                printf("homem\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("vaca\n");
        }
    }
    else if (strcmp(group[0], "invertebrado") == 0) {
        if (strcmp(group[1], "inseto") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("pulga\n");
            else if (strcmp(group[2], "herbivoro") == 0)
                printf("lagarta\n");
        }
        else if (strcmp(group[1], "anelideo") == 0) {
            if (strcmp(group[2], "hematofago") == 0)
                printf("sanguessuga\n");
            else if (strcmp(group[2], "onivoro") == 0)
                printf("minhoca\n");
        }
    }
    return 0;
}
```
