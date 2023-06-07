1157 - Divisores I
==================

Ler um número inteiro N e calcular todos os seus divisores.

Entrada
-------

O arquivo de entrada contém um valor inteiro.

Saída
-----

Escreva todos os divisores positivos de N, um valor por linha.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída         |
|---------------------|---------------------------|
| 6                   | 1 <br/> 2 <br/> 3 <br/> 6 |

&nbsp;

### C99

```c
#include <stdio.h>

int main(){

    int N, i;
    scanf("%i", &N);
    for(i=1; i<=N; i++){
        if(N%i == 0)
            printf("%i\n", i);
    }
    return 0;
}
```
