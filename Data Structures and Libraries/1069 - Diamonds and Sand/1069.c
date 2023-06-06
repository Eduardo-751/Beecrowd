#include <stdio.h>
#include <string.h>

int main()
{
	int N, i, i2, i3;
	char Pilha[2048];
	int diamonds;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%s", Pilha);
		diamonds = 0;
		for (i2 = 0; Pilha[i2] != '\0'; i2++)
		{
			if (Pilha[i2] == '<')
				for (i3 = i2; Pilha[i3] != '\0'; i3++)
				{
					if (Pilha[i3] == '>')
					{
						diamonds++;
						Pilha[i3] = '.';
						break;
					}
				}
		}
		printf("%i\n", diamonds);
	}
}
