<html>
<body style="padding: 10px 0px;">
    <div class="header">
<h1></h1>
        <div class="problem">
            <div class="description">
                <p>
</p>
            </div>
            <h2>Entrada</h2>
            <div class="input">
                <p>
</p>
            </div>
            <h2>Saída</h2>
            <div class="output">
                <p>
</p>
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
</p>
                            </p>
                        </td>
                        <td>
                            <p>
</p>
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

    int hora1, min1, hora2, min2;
    scanf("%i %i %i %i", &hora1, &min1, &hora2, &min2);

    if(hora2<=hora1 && min2<=min1)
        hora2+=24;
    if(min2<min1){
        min2+=60;
        hora1++;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", hora2-hora1, min2-min1);

    return 0;
}
```
