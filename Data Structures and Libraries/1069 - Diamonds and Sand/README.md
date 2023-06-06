<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1069 - Diamantes e Areia</h1>
      <div class="problem">
        <div class="description">
          <p>
            João está trabalhando em uma mina, tentando retirar o máximo que
            consegue de diamantes "&lt;&gt;". Ele deve excluir todas as
            particulas de areia "." do processo e a cada retirada de diamante,
            novos diamantes poderão se formar. Se ele tem como uma entrada
            .&lt;...&lt;&lt;..&gt;&gt;....&gt;....&gt;&gt;&gt;., três diamantes
            são formados. O primeiro é retirado de &lt;..&gt;, resultando&nbsp;
            .&lt;...&lt;&gt;....&gt;....&gt;&gt;&gt;. Em seguida o segundo
            diamante é retirado, restando .&lt;.......&gt;....&gt;&gt;&gt;. O
            terceiro diamante é então retirado, restando no final
            .....&gt;&gt;&gt;., sem possibilidade de extração de novo diamante.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>
            Deve ser lido um valor inteiro <strong>N</strong> que representa a
            quantidade de casos de teste. Cada linha a seguir é um caso de teste
            que contém até 1000 caracteres, incluindo
            "<strong>&lt;</strong>,<strong>&gt;</strong>, <strong>.</strong>"
          </p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>
            Você deve imprimir a quantidade de diamantes possíveis de serem
            extraídos em cada caso de entrada.
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
                <p>2</p>
                <p>&lt;..&gt;&lt;.&lt;..&gt;&gt;</p>
                <p>&lt;&lt;&lt;..&lt;......&lt;&lt;&lt;&lt;....&gt;</p>
              </td>
              <td>
                <p>3</p>
                <p>1</p>
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
#include <string.h>

int main(){

	int N, i, i2, i3;
	char Pilha[2048];
	int diamonds;

	scanf("%d", &N);

	for(i=0; i<N; i++){
        scanf("%s",Pilha);
		diamonds = 0;
		for (i2 = 0; Pilha[i2] != '\0'; i2++) {
         	if (Pilha[i2] == '<')
                for (i3 = i2; Pilha[i3] != '\0'; i3++) {
                    if (Pilha[i3] == '>'){
                        diamonds++;
                        Pilha[i3] = '.';
                        break;
                    }
                }
        }
		printf("%i\n", diamonds);
   	}
}
```
