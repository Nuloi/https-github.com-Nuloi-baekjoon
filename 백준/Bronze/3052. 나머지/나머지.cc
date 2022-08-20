#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>

int main()
{
	int a[10] = {};
	int count = 1, c = 0;
	int b[10] = {};
	for (int i = 0; i < 10; i++)
	{
		scanf("%d",&a[i]);
		a[i] = a[i] % 42;
	}
	b[0] = a[0];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (a[i]==b[j])
			{
				c = 1;
				break;
			}
		}
		if (c == 0)
		{
			b[count] = a[i];
			count += 1;
		}
		c = 0;
	}
	printf("%d", count);
}