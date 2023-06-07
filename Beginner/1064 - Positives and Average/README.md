1064 - Positivos e Média
========================

Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

Entrada
-------

A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo menos um destes números será positivo.

Saída
-----

O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar a média dos valores positivos digitados.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7 <br/> -5 <br/> 6 <br/> -3.4 <br/> 4.6 <br/> 12 | 4 valores positivos <br/> 7.4|

&nbsp;

### C99

```c
#include <stdio.h>

int main() {

    double aux, media=0;
    int pos=0, i;

    for(i=0; i<6; i++){
        scanf("%lf", &aux);

        if(aux>0){
            media = media+aux;
            pos++;
        }
    }

    media = media/pos;

    printf("%i valores positivos\n", pos);
    printf("%.1lf\n", media);

    return 0;
}
```
