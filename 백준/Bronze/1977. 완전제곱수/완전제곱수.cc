#include <stdio.h>
int main() {
	int a, b, c, d, e;
	scanf("%d%d", &a, &b);
	d = -1;
	e = 0;
	for (int i = 1; i <= 100; i++)
	{
		c = i*i;
		if (a <= c && c <= b)
		{
			if (d==-1)
			{
				d = c;
			}
			e = e + c;
			
		}
	}
	if (d==-1)
	{
		printf("%d", d);
	}
	else
	{
		printf("%d\n%d", e, d);
	}
	return 0;
}