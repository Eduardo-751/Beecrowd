1134 - Tipo de Combustível
==========================

Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o código informado for o número 4.

Entrada
-------

A entrada contém apenas valores inteiros e positivos.

Saída
-----

Deve ser escrito a mensagem: "MUITO OBRIGADO" e a quantidade de clientes que abasteceram cada tipo de combustível, conforme exemplo.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída    |
|---------------------|----------------------|
| 8 <br/> 1 <br/> 7 <br/> 2 <br/> 2 <br/> 4 | MUITO OBRIGADO <br/> Alcool: 1 <br/> Gasolina: 2 <br/> Diesel: 0 |

&nbsp;

### C99

```c
#include <stdio.h>

int main()
{
    int n1, a=0, g=0, d=0;
    do {
        scanf("%i", &n1);
        if(n1!=4) {
            switch (n1)
            {
            case 1:
                a++;
                break;
            case 2:
                g++;
                break;
            case 3:
                d++;
                break;
            }
        }
    }
    while(n1!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %i\n", a);
    printf("Gasolina: %i\n", g);
    printf("Diesel: %i\n", d);
    return 0;
}
```
