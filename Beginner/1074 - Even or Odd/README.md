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

	int testes, aux, i;

	scanf("%i", &testes);

	for(i=0; i<testes; i++)
	{
		scanf("%i", &aux);

		if(aux%2==0 && aux!=0)
			printf("EVEN ");
		else if((aux%2==1 || aux%2==-1) && aux!=0)
			printf("ODD ");

		if(aux>0)
			printf("POSITIVE\n");
		else if(aux<0)
			printf("NEGATIVE\n");
		else
			printf("NULL\n");
	}

	return 0;
}
```
