1158 - Soma de Ímpares Consecutivos III
=======================================

Leia um valor inteiro **N** que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste de dois inteiros **X** e **Y**. Você deve apresentar a soma de **Y** ímpares consecutivos a partir de **X** inclusive o próprio X se ele for ímpar. Por exemplo:  
para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13  
para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13

Entrada
-------

A primeira linha de entrada é um inteiro **N** que é a quantidade de casos de teste que vem a seguir. Cada caso de teste consiste em uma linha contendo dois inteiros **X** e **Y**.

Saída
-----

Imprima a soma dos consecutivos números ímpares a partir do valor **X**.

&nbsp;

| Exemplos de Entrada    | Exemplos de Saída         |
|------------------------|---------------------------|
| 2 <br/> 4 3 <br/> 11 2 | 21 <br/> 24               |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int cases, X, Y, Sum=0, i, i2;
    scanf("%i", &cases);
    for(i=0; i<cases; i++) {
        Sum=0;
        scanf("%i %i", &X, &Y);
        for(i2=X; Y>0 ; i2++){
            if(i2%2 == 1 || i2%2 == -1){
                Sum+=i2;
                Y--;
            }
        }
        printf("%i\n", Sum);
    }
    return 0;
}
```
