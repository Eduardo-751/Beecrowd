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

	int N, X, Y, Soma=0;
	scanf("%i", &N);
	while(N>0){

		scanf("%i %i", &X, &Y);
		if(X<Y){
			X++;
			for(X; X<Y; X++){
				if(X%2 == 1)
					Soma+=X;
			}
		}
		else{
			Y++;
			for(Y; Y<X; Y++){
				if(Y%2 == 1)
					Soma+=Y;
			}
		}
		printf("%i\n", Soma);
		Soma=0;
		N--;
	}
	return 0;
}
```
