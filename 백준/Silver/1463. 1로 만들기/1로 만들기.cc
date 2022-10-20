#define _CRT_SECURE_NO_WARNINGS    
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a;
	scanf("%d", &a);
	int b[a + 1];
	b[1] = 0;
	for (int i = 2; i <= a; i++)
	{
		b[i] = b[i - 1] + 1;
		if (i % 2 == 0)
		{
			if (b[i] > b[i / 2] + 1)
			{
				b[i] = b[i / 2] + 1;
			}
		}
		if (i % 3 == 0)
		{
			if (b[i] > b[i / 3] + 1)
			{
				b[i] = b[i / 3] + 1;
			}
		}
	}
	printf("%d", b[a]);
}
