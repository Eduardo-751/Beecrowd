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
#include <math.h>

int main(){

    int i, a=0, b=0, c=0, d=0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
        else
            b++;
        if(A[i]>0)
            c++;
        else if(A[i]<0)
            d++;
    }
    printf("%i valor(es) par(es)\n", a);
    printf("%i valor(es) impar(es)\n", b);
    printf("%i valor(es) positivo(s)\n", c);
    printf("%i valor(es) negativo(s)\n", d);
    return 0;
}
```
