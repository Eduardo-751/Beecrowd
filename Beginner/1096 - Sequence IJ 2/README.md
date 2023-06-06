<html>
  <body style="padding: 10px 0px">
    <div class="header">
      <h1>1096 - Sequencia IJ 2</h1>
      <div class="problem">
        <div class="description">
          <p>
            Você deve fazer um programa que apresente a sequencia conforme o
            exemplo abaixo.
          </p>
        </div>
        <h2>Entrada</h2>
        <div class="input">
          <p>Não há nenhuma entrada neste problema.</p>
        </div>
        <h2>Saída</h2>
        <div class="output">
          <p>Imprima a sequencia conforme exemplo abaixo</p>
        </div>
        <div class="both"></div>
        <table>
          <tbody>
            <tr>
              <td>Exemplo de Entrada</td>
              <td>Exemplo de Saída</td>
            </tr>
            <tr>
              <td class="division"></td>
              <td>
                <p>
                  I=1 J=7<br />
                  I=1 J=6<br />
                  I=1 J=5<br />
                  I=3 J=7<br />
                  I=3 J=6<br />
                  I=3 J=5<br />
                  ...<br />
                  I=9 J=7<br />
                  I=9 J=6<br />
                  I=9 J=5
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

	int i, i2;

	for(i=1; i<=9; i+=2)
	{
		for(i2=7; i2>=5; i2--){
			printf("I=%i J=%i\n", i, i2);
		}
	}
	return 0;
}
```
