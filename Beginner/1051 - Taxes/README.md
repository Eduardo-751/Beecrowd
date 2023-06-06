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

    double salario, imposto=0;

    scanf("%lf", &salario);

    if(salario > 4500){
        imposto = imposto + (salario-4500)*0.28;
        imposto = imposto + (1500*0.18);
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 3000){
        imposto = imposto + (salario-3000)*0.18;
        imposto = imposto + (1000*0.08);
        printf("R$ %.2lf\n", imposto);
    }
    else if(salario > 2000){
        imposto = imposto + (salario-2000)*0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else
        printf("Isento\n");

    return 0;
}
```
