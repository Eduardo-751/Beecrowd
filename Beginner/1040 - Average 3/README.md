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

    double m1, m2, m3, m4, med1, med2, medfinal;
    scanf("%lf %lf %lf %lf", &m1, &m2, &m3, &m4);
    med1 =(m1*0.2)+(m2*0.3)+(m3*0.4)+(m4*0.1);
    printf("Media: %.1lf\n", med1);
    if(med1>=7){
        printf("Aluno aprovado.\n");
    }
    else if(med1>=5 && med1<7){
        printf("Aluno em exame.\n");
        scanf("%lf", &med2);
        printf("Nota do exame: %.1lf\n", med2);
        medfinal = (med1+med2)/2;
        if(medfinal >= 5){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n", medfinal);
    }
    else
        printf("Aluno reprovado.\n");
    return 0;
}
```
