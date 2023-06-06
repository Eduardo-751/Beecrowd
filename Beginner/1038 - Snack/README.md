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

    int A, B;
    float valor;

    scanf("%i %i", &A, &B);
    switch(A){
        case 1:
            valor = B * 4.0;
            break;
        case 2:
            valor = B * 4.5;
            break;
        case 3:
            valor = B * 5.0;
            break;
        case 4:
            valor = B * 2.0;
            break;
        case 5:
            valor = B * 1.5;
            break;
    }
    printf("Total: R$ %.2lf\n", valor);
    return 0;
}
```
