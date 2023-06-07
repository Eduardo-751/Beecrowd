1120 - Revisão de Contrato
==========================

Durante anos, todos os contratos da Associação de Contratos da Modernolândia (ACM) foram datilografados em uma velha máquina de datilografia.  
  
Recentemente Sr. Miranda, um dos contadores da ACM, percebeu que a máquina apresentava falha em um, e apenas um, dos dígitos numéricos. Mais especificamente, o dígito falho, quando datilografado, não é impresso na folha, como se a tecla correspondente não tivesse sido pressionada. Ele percebeu que isso poderia ter alterado os valores numéricos representados nos contratos e, preocupado com a contabilidade, quer saber, a partir dos valores originais negociados nos contratos, que ele mantinha em anotações manuscritas, quais os valores de fato representados nos contratos. Por exemplo, se a máquina apresenta falha no dígito 5, o valor 1500 seria datilografado no contrato como 100, pois o 5 não seria impresso. Note que o Sr. Miranda quer saber o valor numérico representado no contrato, ou seja, nessa mesma máquina, o número 5000 corresponde ao valor numérico 0, e não 000 (como ele de fato aparece impresso).

Entrada
-------

A entrada consiste de diversos casos de teste, cada um em uma linha. Cada linha contém dois inteiros **D** e **N** (1 ≤ **D** ≤ 9, 1 ≤ **N** < 10100 ), representando, respectivamente, o dígito que está apresentando problema na máquina e o número que foi negociado originalmente no contrato (que podem ser grande, pois Modernolândia tem sido acometida por hiperinflação nas últimas décadas).  
  
O ultimo caso de teste é seguido por uma linha que contém apenas dois zeros separados por espaços em branco.

Saída
-----

Para cada caso de teste da entrada o seu programa deve imprimir uma linha contendo um único inteiro **V**, o valor numérico representado de fato no contrato.

&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| 5 5000000 <br/> 3 123456 <br/> 9 23454324543423 <br/> 9 99999999991999999 <br/> 7 777 <br/> 0 0 | 0 <br/> 12456 <br/> 23454324543423 <br/> 1 <br/> 0 |

&nbsp;

### C99

```c
#include <string.h>
#include <stdio.h>

int main(){
    int n, p;
    char D, N[101], resposta[101];

    while(scanf("%c %s\n", &D, &N) != EOF){
        if(D == '0' && !strcmp(N, "0"))    break;

        p = 0;
        n = strlen(N);
        memset(resposta, '\0', sizeof(resposta));

        for(int i = 0; i < n; ++i){
            if(N[i] != D)   resposta[p++] = N[i];
        }

        p = 0;
        n = strlen(resposta);
        while(p < n){
            if(resposta[p] != '0')  break;
            ++p;
        }

        if(p == n){
            printf("0\n");
        }else{
            strcpy(resposta, resposta + p);
            printf("%s\n", resposta);
        }
    }

    return 0;
}
```
