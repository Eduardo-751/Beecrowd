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

    int cases, X, Y, Sum=0, i, i2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        Sum=0;
        scanf("%i %i", &X, &Y);
        for(i2=X; Y>0 ; i2++){
            if(i2%2 == 1 || i2%2 == -1){
                Sum+=i2;
                Y--;
            }
        }
        printf("%i\n", Sum);
    }
    return 0;
}
```
