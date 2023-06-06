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

int main()
{

    double salario;
    int aux;

    scanf("%lf", &salario);

    if (salario <= 400.00)
        aux = 15;
    else if (salario <= 800.00)
        aux = 12;
    else if (salario <= 1200.00)
        aux = 10;
    else if (salario <= 2000.00)
        aux = 7;
    else
        aux = 4;

    printf("Novo salario: %.2lf\n", salario * (1 + aux / 100.00));
    printf("Reajuste ganho: %.2lf\n", salario * aux / 100.00);
    printf("Em percentual: %d \%\n", aux);

    return 0;
}
```
