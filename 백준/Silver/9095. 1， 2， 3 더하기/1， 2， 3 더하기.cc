#include<stdio.h>

int main() {
	int a, c;
	scanf("%d", &a);
	int b[11];
	b[0] = 1;
	b[1] = 2;
	b[2] = 4;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &c);
		for (int j = 3; j < c; j++)
		{
			b[j] = b[j - 3] + b[j - 2] + b[j - 1];
		}
		if (c==0)
		{
			printf("%d\n", 0);
		}
		else
		{
			printf("%d\n", b[c - 1]);
		}
	}
}