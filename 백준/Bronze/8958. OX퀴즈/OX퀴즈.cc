#include <stdio.h>
#include <string.h>

int main() {
	char a[80];
	int b, plus, meme;
	scanf("%d", &b);
	for (int i = 0; i < b; i++)
	{
		meme = 0;
		plus = 1;
		scanf("%s", a);
		for (int k = 0; k < strlen(a); k++)
		{
			if (a[k] == 'O')
			{
				meme = meme + plus;
				plus = plus + 1;
			}
			if (a[k] == 'X')
			{
				plus = 1;
			}
		}
		printf("%d\n", meme);
	}
}