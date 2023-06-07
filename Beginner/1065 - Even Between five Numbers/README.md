1065 - Pares entre Cinco Números
================================

Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

Entrada
-------

O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
-----

Imprima a mensagem conforme o exemplo fornecido, indicando a quantidade de valores pares lidos.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 7 <br/> -5 <br/> 6 <br/> -4 <br/> 12 <br/> 12 | 3 valores pares|

&nbsp;

### C99

```c
#include <stdio.h>
#include <math.h>

int main(){

    int i, a = 0;
    int A[5];

    for(i=0; i<5; i++){
        scanf("%i", &A[i]);
        if(A[i]%2 == 0)
            a++;
    }
    printf("%i valores pares\n", a);
    return 0;
}
```
