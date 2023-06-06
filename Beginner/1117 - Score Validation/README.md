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

int main(){

	float a, b, media;
	scanf("%f", &a);
	while(a<0 || a>10) {
		printf("nota invalida\n");
		scanf("%f", &a);
	}
	scanf("%f", &b);
	while(b<0 || b>10) {
		printf("nota invalida\n");
		scanf("%f", &b);
	}
	printf("media = %.2f\n", (a+b)/2);
	return 0;
}
```
