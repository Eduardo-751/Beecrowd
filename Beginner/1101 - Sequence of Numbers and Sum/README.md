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
#include<stdio.h>

int main(){

	int M, N, Sum=0, aux;
	while(scanf("%d %d", &M,&N)!=0) {
		if(M<=0 || N<=0)
			break;

		if(N<M) {
			aux = N;
			N = M;
			M = aux;
		}
		for(M; M<=N; M++) {
			printf("%i ", M);
			Sum+=M;
		}
		printf("Sum=%i\n", Sum);
		Sum=0;
	}
	return 0;
}
```
