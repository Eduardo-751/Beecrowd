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

    double X1, Y1;

    scanf("%lf %lf",&X1, &Y1);

    if(X1==0 && Y1==0)
        printf("Origem\n");
    else if(X1==0)
        printf("Eixo Y\n");
    else if(Y1==0)
        printf("Eixo X\n");
    else if(X1>0 && Y1>0)
        printf("Q1\n");
    else if(X1<0 && Y1<0)
        printf("Q3\n");
    else if(X1>0 && Y1<0)
        printf("Q4\n");
    else if(X1<0 && Y1>0)
        printf("Q2\n");
    return 0;
}
```
