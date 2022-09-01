/*
John is working in a diamond mine, trying to extract the highest number of diamond "<>". 
He must exclude all sand particles found "." in this process and after a diamond can be extracted, new diamonds can be formed. 
If he has as an input. <... << .. >> ....> .... >>>. three diamonds are formed. The first is taken from <..> resulting. <... <> ....> .... >>>. 
The second diamond is then removed, leaving. <.......> .... >>>. The third diamond is then removed, leaving at the end ..... >>>. 
without the possibility of extracting new diamonds.

Input
Read an integer N that is the number of test cases. Then follows N lines each up to 1000 characters, including "<" ,">" and "."

Output
You must print the amount of diamonds that can be extrated in each test case.

Input Sample	        Output Sample
2
<..><.<..>>             3
<<<..<......<<<<....>   1
*/
#include <stdio.h>
#include <string.h>

int main(){
	 
	int N, i, i2, i3;
	char Pilha[2048];
	int diamonds;

	scanf("%d", &N);
	
	for(i=0; i<N; i++){
        scanf("%s",Pilha);
		diamonds = 0;
		for (i2 = 0; Pilha[i2] != '\0'; i2++) {
         	if (Pilha[i2] == '<')
                for (i3 = i2; Pilha[i3] != '\0'; i3++) {
                    if (Pilha[i3] == '>'){
                        diamonds++;
                        Pilha[i3] = '.';
                        break;
                    }
                }        
        }
		printf("%i\n", diamonds);	
   	}	
}
