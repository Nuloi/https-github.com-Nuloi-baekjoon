#include <stdio.h>
int main() {
	int a, b, c, d;
	c = 0;
	d = 0;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b==1)
		{
			c = 1;
		}
		for (int i = 2; i <= b/2; i++)
		{
			if (b%i==0)
			{
				c = 1;
			}
		}
		if (c==0)
		{
			d++;
		}
		c = 0;
	}
	printf("%d", d);
}