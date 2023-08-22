#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main() {
	int a, b, d = 0;
	scanf("%d", &a);
	int c[100000] = { 0 };
	long long max = 0;
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		if (b > 0)
		{
			c[d] = b;
			d += 1;
		}
		else if (b == 0)
		{
			if (d != 0)
			{
				d -= 1;
			}
			c[d] = 0;
		}
	}
	for (int i = 0; i < d; i++)
	{
		max += c[i];
	}
	printf("%lld", max);
}