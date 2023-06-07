1015 - Distância Entre Dois Pontos
==================================

Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:

Distancia =![](https://resources.beecrowd.com.br/gallery/images/problems/UOJ_1015.png)

Entrada
-------

O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto flutuante: _**x1 y1**_ e a segunda linha contém dois valores de ponto flutuante _**x2 y2**_.

Saída
-----

Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.

&nbsp;

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 1.0 7.0 <br/> 5.0 9.0    | 4.4721                   |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| -2.5 0.4 <br/> 12.1 7.3  | 16.1484                  |

| Exemplos de Entrada      | Exemplos de Saída        |
|--------------------------|--------------------------|
| 2.5 -0.4 <br/> -12.2 7.0 | 16.4575                  |

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    double x1, y1, x2, y2, distancia, m1, m2;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    m1 = pow((x2-x1), 2);
    m2 = pow((y2-y1), 2);
    distancia = sqrt(m1 + m2);
    printf("%.4lf\n", distancia);
    return 0;
}
```
