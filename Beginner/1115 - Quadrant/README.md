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

	int X, Y;
	scanf("%i %i", &X, &Y);
	while(X!=0 && Y!=0) {
		if(X>0)
			if(Y>0)
				printf("primeiro\n");
			else
				printf("quarto\n");
		if(X<0)
			if(Y>0)
				printf("segundo\n");
			else
				printf("terceiro\n");

		scanf("%i %i", &X, &Y);
	}
	return 0;
}
```
