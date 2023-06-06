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

int main() {

    int i, a, b, soma=0;

    scanf("%i %i", &a, &b);

    if (a<b){
        for(i=a+1; i<b; i++){
            if(i%2 == 1)
                soma = soma+i;
            else if(i%2 == -1)
                soma = soma+i;
        }
    }
    else{
        for(i=b+1; i<a; i++){
            if(i%2 == 1)
                soma = soma+(i);
            else if(i%2 == -1)
                soma = soma+i;
        }
    }

    printf("%i\n", soma);

    return 0;
}
```
