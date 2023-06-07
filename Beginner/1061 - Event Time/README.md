1061 - Tempo de um Evento
=========================

Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

Entrada
-------

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato **hh : mm : ss**. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

Saída
-----

Na saída, deve ser apresentada a duração do evento, no seguinte formato:  
  
W dia(s)  
X hora(s)  
Y minuto(s)  
Z segundo(s)  
  
_Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto._


&nbsp;

| Exemplos de Entrada | Exemplos de Saída |
|---------------------|-------------------|
| Dia 5 <br/> 08 : 12 : 23 <br/> Dia 9 <br/> 06 : 13 : 23 | 3 dia(s) <br/> 22 hora(s) <br/> 1 minuto(s) <br/> 0 segundo(s) |

&nbsp;

### C99

```c
#include <stdio.h>

int converte(int day, int hour, int min, int sec) {
    return (24 * 60 * 60 * day) + (60 * 60 * hour) + (60 * min) + sec;
}

int main() {
    int d1, h1, m1, s1, d2, h2, m2, s2;
    scanf("Dia %d\n", &d1);
    scanf("%d : %d : %d\n", &h1, &m1, &s1);
    scanf("Dia %d\n", &d2);
    scanf("%d : %d : %d\n", &h2, &m2, &s2);

    int secTotal = converte(d2, h2, m2, s2) - converte(d1, h1, m1, s1);

    printf("%d dia(s)\n", secTotal / (24 * 60 * 60));
    secTotal %= 24 * 60 * 60;
    printf("%d hora(s)\n", secTotal / (60 * 60));
    secTotal %= 60 * 60;
    printf("%d minuto(s)\n", secTotal / 60);
    secTotal %= 60;
    printf("%d segundo(s)\n", secTotal);

    return 0;
}
```
