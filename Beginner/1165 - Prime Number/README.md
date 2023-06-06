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

    int N, X, Sum;
    int i, i2;
    scanf("%i", &N);
    for(i=0; i<N; i++) {
        Sum=0;
        scanf("%i", &X);
        for(i2=1; i2<=X; i2++) {
            if(X%i2==0)
                Sum++;
        }
        if(Sum==2)
            printf("%i eh primo\n", X);
        else
            printf("%i nao eh primo\n", X);
    }
    return 0;
}
```
