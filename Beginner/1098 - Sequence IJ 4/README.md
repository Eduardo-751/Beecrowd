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
int main() {
    float i, j;
    for(i=0; i<2.1; i=i+0.2) {
        j=i+1;
        if(i==0 || i==1 || i>1.9) {
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
            j=j+1;
            printf("I=%.0lf J=%.0lf\n", i,j);
        }
        else {
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
            j=j+1;
            printf("I=%.1lf J=%.1lf\n", i,j);
        }
    }
    return 0;
}
```