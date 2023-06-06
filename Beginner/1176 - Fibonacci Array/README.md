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

long long F[61];

long long Fibonacci(int n){
    if(F[n] == -1){
        F[n] = Fibonacci(n - 2) + Fibonacci(n - 1);
    }
    return F[n];
}

int main() {

    int i, T, N;

    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 61; ++i)
            F[i] = -1;

    scanf("%i", &T);
    for (i = 0; i < T; i++) {
        scanf("%i", &N);
        printf("Fib(%d) = %lld\n", N, Fibonacci(N));
    }
    return 0;
}
```
